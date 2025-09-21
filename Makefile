# Define variables
LOAD_TO=flash
AR_PKG_NAME:=TS_T0D0M0I0R0

# Project directories
GCC_DIR := C:/gcc
PROJECT_DIR := D:/MyProjects/stm32f103xb_example
INCLUDE_DIR := $(PROJECT_DIR)/include
SRC_DIR := $(PROJECT_DIR)/src
OUTPUT_DIR := $(PROJECT_DIR)/out
OBJ_DIR := $(OUTPUT_DIR)/obj

# List of all source files
SRC_DIRS		+=  $(SRC_DIR) \
			   		$(PROJECT_DIR)/Plugins/Base_$(AR_PKG_NAME)/src \
			   		$(PROJECT_DIR)/Plugins/Port_$(AR_PKG_NAME)/src \
					$(SRC_DIR)/m3/gcc

# List of all include files
INCLUDE_DIRS	+= 	$(INCLUDE_DIR) \
				 	$(PROJECT_DIR)/Plugins/Base_$(AR_PKG_NAME)/include \
					$(PROJECT_DIR)/Plugins/Base_$(AR_PKG_NAME)/header \
				 	$(PROJECT_DIR)/Plugins/Port_$(AR_PKG_NAME)/include

# The executable file name
EXC_FILE := stm32f103xb_example.elf

# List of all src files
SRC_FILES		+=  $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c) ) \
					$(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.s) ) \
					$(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.S) )


# List of all include files
INCLUDE_FILES	+= $(foreach dir, $(INCLUDE_DIRS), $(wildcard $(dir)/*.h) )

# The variable to store linker command file
LINKER_DEF := $(PROJECT_DIR)/build_files/gcc/stm32f103c8tx_flash.ld

# The variable to store the object file
OBJ_FILES := $(notdir $(patsubst %.c,%.o,$(patsubst %.s,%.o,$(patsubst %.S,%.o,$(SRC_FILES)))))

# Dependency files
DEP_FILES := $(addprefix $(OBJ_DIR)/,$(OBJ_FILES:.o=.d))

# Include dependency files that exist
-include $(DEP_FILES)

# Output: -Iinclude -I../include
CFLAGS := $(addprefix -I,$(INCLUDE_DIRS))

# The -MMD and -MP flags that will generate a file .d next to the .o file
DEP_FLAG =-MT"$(@)" -MMD -MP -MF"$(OUTPUT_DIR)/$(*).d"

# Compiler for C files, linker, S files
CC := $(GCC_DIR)/bin/arm-none-eabi-gcc.exe
LD := $(GCC_DIR)/bin/arm-none-eabi-gcc.exe
AS := $(GCC_DIR)/bin/arm-none-eabi-gcc.exe

MAPFILE = $(OUTPUT_DIR)/stm32f103xb_example.map

clib        := $(GCC_DIR)/arm-none-eabi/lib
specs       := nano.specs \
               nosys.specs

# Compiler options
CCOPT := -mcpu=cortex-m3 \
         -mthumb \
         -O0 \
         -Wall \
         -fdata-sections \
         -ffunction-sections \
         --sysroot="$(clib)" \
         $(foreach spec, $(specs), -specs=$(spec))

# Assembler options
ASOPT := -c \
		 -mthumb \
	     -mcpu=cortex-m3 \
		 -mfpu=fpv5-sp-d16 \
		 -mfloat-abi=hard  \
		 -x assembler-with-cpp
# Linker options - FIXED
LDOPT :=  --entry=Reset_Handler \
		 -mcpu=cortex-m3 \
         -mthumb \
         -mfloat-abi=soft \
         -Wl,--gc-sections \
         $(foreach spec, $(specs), -specs=$(spec)) \
         -Wl,--start-group -lm -lnosys -Wl,--end-group \
         -o "$(OUTPUT_DIR)/$(EXC_FILE)"

# List of directories to search for missing source files
vpath %.c $(SRC_DIRS)
vpath %.s $(SRC_DIRS)
vpath %.S $(SRC_DIRS)

# Special variables


.PHONY: build clean

#target to build a project

build: create_dir $(EXC_FILE)
	@echo "Build Finished"

create_dir:
	@mkdir -p "$(OUTPUT_DIR)"
	@echo "Output directory was created successfully"

%.o : %.c $(INCLUDE_FILES)
	@echo "Compiling $<"
	@$(CC) $(CCOPT) -c -o $(OUTPUT_DIR)/$@ $< $(CFLAGS) $(DEP_FLAG)
	@echo "Finish compiling"

%.o : %.s
	@echo "Compiling $<"
	@$(AS) $(ASOPT) $< -o $(OUTPUT_DIR)/$@ $(DEP_FLAG)
	@echo "Finish compiling"

%.o : %.S
	@echo "Compiling $<"
	@$(AS) $(ASOPT)	$< -o $(OUTPUT_DIR)/$@ $(DEP_FLAG)
	@echo "Finish compiling"

# Linking all object files to create an executable file

$(EXC_FILE) : $(OBJ_FILES) $(LINKER_DEF)
	@echo "Linking"
	@$(LD) -Wl,-Map,"$(MAPFILE)" $(LDOPT) -T $(LINKER_DEF) $(ODIR)/*.o -o $(ODIR)/$@
	@echo "Finish linking"

clean:
	@rm -rf $(OUTPUT_DIR)/*
	@echo "Clean completed"

# Print debug info
print-sources:
	@echo "SRC_FILES: $(SRC_FILES)"
	@echo "OBJ_FILES: $(OBJ_FILES)"
