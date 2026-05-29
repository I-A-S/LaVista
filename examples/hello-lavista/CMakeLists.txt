add_executable(HelloLaVista
  cpp/main.cpp
)

if(WIN32)
  set_property(TARGET HelloLaVista PROPERTY WIN32_EXECUTABLE TRUE)
endif()

target_link_libraries(HelloLaVista PRIVATE 
  LaVista
)

set_target_properties(HelloLaVista PROPERTIES CXX_SCAN_FOR_MODULES ON)
