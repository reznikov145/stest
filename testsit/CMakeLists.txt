Project(testit)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#-----------------------------------------------------------------------------
set ( IT_TEST_SRC 
    sum
)

create_test_sourcelist(ItTests itTests.cxx ${IT_TEST_SRC})

add_executable(itTests ${ItTests})
target_include_directories(itTests PRIVATE ${CMAKE_SOURCE_DIR}/rank)
target_link_libraries(itTests rank)

# Loop over files and create test items
foreach(name ${IT_TEST_SRC})
    message (${name})
  add_test(NAME ${name} COMMAND itTests ${name})
endforeach()



