cmake_minimum_required(VERSION 3.15)
project(MiniLibC)
enable_language(C ASM_NASM)
set(CMAKE_C_STANDARD 99)

include_directories(include/)
set(CMAKE_ASM_NASM_OBJECT_FORMAT elf64)
set(CMAKE_ASM_NASM_COMPILE_OBJECT "<CMAKE_ASM_NASM_COMPILER> <INCLUDES> \
    <FLAGS> -f ${CMAKE_ASM_NASM_OBJECT_FORMAT} -o <OBJECT> <SOURCE>")

set_source_files_properties(${ASM_SOURCES} PROPERTIES COMPILE_FLAGS "-g -Fdwarf")
set_source_files_properties(${ASM_SOURCES} PROPERTIES LANGUAGE ASM_NASM)
set(CMAKE_C_FLAGS -fno-builtin)

set(ASM_SRC_DIR src/)
set(
        ASM_SOURCES
        ${ASM_SRC_DIR}/strlen.asm
        ${ASM_SRC_DIR}/strchr.asm
        ${ASM_SRC_DIR}/memset.asm
        ${ASM_SRC_DIR}/memcpy.asm
        ${ASM_SRC_DIR}/memmove.asm
        ${ASM_SRC_DIR}/strcmp.asm
        ${ASM_SRC_DIR}/strncmp.asm
        ${ASM_SRC_DIR}/rindex.asm
        ${ASM_SRC_DIR}/strstr.asm
        ${ASM_SRC_DIR}/strcasecmp.asm
        ${ASM_SRC_DIR}/strpbrk.asm
        ${ASM_SRC_DIR}/strcspn.asm
)

set(SOURCES main.c ${ASM_SOURCES})
add_executable(AsmMain include/libasm.h ${SOURCES})

#set_target_properties(asm PROPERTIES LINKER_LANGUAGE ASM_NASM)

set(TESTS_DIR ${CMAKE_SOURCE_DIR}/tests)
add_subdirectory(tests)
enable_testing()
add_test(tests unit_tests)

#add_custom_target(
#        tests_run
#        COMMAND cp -r ${CMAKE_SOURCE_DIR}/tests/bins ${CMAKE_CURRENT_BINARY_DIR}/tests/
#        COMMAND ./tests/unit_tests --always-succeed
#        COMMAND gcovr -s    --exclude='tests|lib' -r ${CMAKE_SOURCE_DIR}
#        COMMAND gcovr -s -b --exclude='tests|lib' -r ${CMAKE_SOURCE_DIR}
#)
