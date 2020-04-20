set(CMAKE_C_STANDARD 99)
add_compile_options(-DTESTS)
set(CMAKE_C_FLAGS -fno-builtin)

set(TESTS_SRC_DIR ${TESTS_DIR}/src)
set(
        TESTS_SRC
        ${TESTS_SRC_DIR}/test_strlen.c
        ${TESTS_SRC_DIR}/test_strlen.c
        ${TESTS_SRC_DIR}/test_strchr.c
        ${TESTS_SRC_DIR}/test_memset.c
        ${TESTS_SRC_DIR}/test_memcpy.c
        ${TESTS_SRC_DIR}/test_memmove.c
        ${TESTS_SRC_DIR}/test_strcmp.c
        ${TESTS_SRC_DIR}/test_strncmp.c
        ${TESTS_SRC_DIR}/test_rindex.c
        ${TESTS_SRC_DIR}/test_strstr.c
        ${TESTS_SRC_DIR}/test_strcasecmp.c
        ${TESTS_SRC_DIR}/test_strpbrk.c
        ${TESTS_SRC_DIR}/test_strcspn.c
)

foreach (asm_src ${ASM_SOURCES})
    set(ASM_TESTS_SRC ${ASM_TESTS_SRC} ${PROJECT_SOURCE_DIR}/${asm_src})
endforeach (asm_src)

include_directories(${PROJECT_SOURCE_DIR}/include include)
add_executable(
        unit_tests
        ${ASM_TESTS_SRC}
        ${TESTS_SRC}
)
target_link_libraries(unit_tests criterion)
link_libraries(criterion)
