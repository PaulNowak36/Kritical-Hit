cmake_minimum_required(VERSION 3.14)
project(Simulation_Test1 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Find Qt
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets LinguistTools)

# Add UI file
set(UI_FILES
    mainwindow.ui
)

# Add translation files
set(TS_FILES
    Simulation_Test1_en_US.ts
)

# Add sources and headers
set(SOURCES
    entity.cpp
    main.cpp
    mainwindow.cpp
)

set(HEADERS
    battle.h
    entity.h
    mainwindow.h
)

# Generate UI headers
qt_wrap_ui(UI_HEADERS ${UI_FILES})
qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

# Create executable
add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${UI_FILES}
    ${QM_FILES}
)

# Link Qt libraries
target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

# Embed translations
set_source_files_properties(${QM_FILES} PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")
