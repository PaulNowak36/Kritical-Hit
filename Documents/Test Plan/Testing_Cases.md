# Test Plan 

| Author | Paul NOWAK |
|--------|------------|
| Created | June 3rd 2025 |
| Last Modified | June 3rd 2025 |
| Document Deadline | June 9th 2025 |

---

<details>

<summary>📖 Table of content</summary>

- [Introduction](#introduction)
  - [1.1 Document Purpose](#11-document-purpose)
  - [1.2 Objectives](#12-objectives)
- [2. Testing Strategy](#2-testing-strategy)
  - [2.1 Functional Testing](#21-functional-testing)
  - [2.2 Non-Functional Testing](#22-non-functional-testing)
  - [2.3 Regression Testing](#23-regression-testing)
- [3. Testing Process](#3-testing-process)
  - [3.1 Environment Setup](#31-environment-setup)
  - [3.2 Test Development Structure](#32-test-development-structure)
  - [3.3 Test Execution Flow](#33-test-execution-flow)
  - [3.4 External Testing Protocol](#34-external-testing-protocol)
  - [3.5 Bug Tracking System](#35-bug-tracking-system)
  - [3.6 Test Execution Checklist](#36-test-execution-checklist)
- [4. Main Features to Test](#4-main-features-to-test)
  - [4.1 Battle System Configuration](#41-battle-system-configuration)
  - [4.2 Simulation Interface](#42-simulation-interface)
  - [4.3 User Interface](#43-user-interface)
- [5. Out of Scope Features](#5-out-of-scope-features)
  - [5.1 Feature Exclusion Overview](#51-feature-exclusion-overview)
  - [5.2 Future Implementation Possibilities](#52-future-implementation-possibilities)
  - [5.3 Testing Impact Analysis](#53-testing-impact-analysis)
  - [5.4 Documentation and Communication](#54-documentation-and-communication)
  - [5.5 Testing Preparation for Future Features](#55-testing-preparation-for-future-features)
- [6. Hardware Requirements](#6-hardware-requirements)
  - [6.1 Testing Environment Specifications](#61-testing-environment-specifications)
  - [6.2 Test Environment Variations](#62-test-environment-variations)
  - [6.3 Input Device Testing](#63-input-device-testing)
  - [6.4 Performance Testing Tools](#64-performance-testing-tools)
  - [6.5 Testing Metrics](#65-testing-metrics)
- [7. Environment Requirements](#7-environment-requirements)
  - [7.1 Development Environment Setup](#71-development-environment-setup)
  - [7.2 Testing Framework Configuration](#72-testing-framework-configuration)
  - [7.3 Version Control Strategy](#73-version-control-strategy)
  - [7.4 Test Environment Management](#74-test-environment-management)
  - [7.5 Quality Assurance Procedures](#75-quality-assurance-procedures)
- [8. External User Testing](#8-external-user-testing)
  - [8.1 Participant Selection](#81-participant-selection)
  - [8.2 Test Environment Setup](#82-test-environment-setup)
  - [8.3 Testing Protocol](#83-testing-protocol)
  - [8.4 Data Collection and Analysis](#84-data-collection-and-analysis)
  - [8.5 Testing Management](#85-testing-management)
- [9. Problem Reporting](#9-problem-reporting)
  - [9.1 Bug Classification System](#91-bug-classification-system)
  - [9.2 Documentation Process](#92-documentation-process)
- [10. Risks and Assumptions](#10-risks-and-assumptions)
  - [10.1 Testing Risk Matrix](#101-testing-risk-matrix)
  - [10.2 Testing Assumptions](#102-testing-assumptions)

</details>


---

## Test Case Template

| ID  | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|----------|----------------|-----------|-----|-----|--------|
|     |             |          |                |           |     |     |        |


## 1. Battle Simulation

### 1.1. Unit Tests

#### 1.1.1 Entity Creation Tests
| ID       | Description                                                                                  | Priority | Pre-requisites                                                                                   | Procedure                                                                                              | Exp                            | Out | Status       |
|----------|----------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|--------------------------------|-----|--------------|
| UNT_1111 | Verify that the `Entity` class can be instantiated and correctly initialized with values for name, level, stats, and type. Ensure all properties are properly assigned and retrievable. | Critical | 1. Class files (`Entity.cpp`, `Entity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br />   2. Initialize an `Entity` object with test values.  <br /> 3. Use assertions to verify each member is correctly set | The unit test should pass, confirming all properties are correctly initialized and retrievable | N/A | To be tested |
| UNT_1112 | Check the remaining number of HP of the Entity Class | Critical |1. Class files (`Entity.cpp`, `Entity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. write unit test 2. initialize entity object 3. use assertions| unit test is passed| N/A | To be tested |
| UNT_1113 | MockUp Moveset Set Up | High |                |           |     |     | To be tested |



#### 1.1.2 Capacity Creation Tests
- ID: 1121; Create and Verify Capacity (all attributes)
- ID: 1122; Check Remaining PP
- ID: 1123; Set up Stat modifiers

#### 1.1.3 Battle Creation Tests
- ID: 1131; Create and Initialize Battle (with entities, state, turn)
- ID: 1132; Change Battle State 
- ID: 1133; Handle Turn order (speed + random value if same speed)
- ID: 1134; Go to next turn
- ID: 1135; Mockup AI Entity choose

#### 1.1.4 Damage Calculation Tests
- ID: 1141; Base Damage Calculation
- ID: 1142; Healing Calculation
- ID: 1143; Buff Calculation
- ID: 1144; Nerf Calculation
- ID: 1145; STAB Bonus Calculation
- ID: 1146; Critical Hit Bonus Calculation

#### 1.1.5 HP Management Tests
- ID: 1151; Mockup Entity Damage and Zero HP handling
- ID: 1152; Mockup Entity Healing and Full HP handling

#### 1.1.6 Stat Change Tests
- ID: 1161; Entity Stat Buff and Maximum Limit
- ID: 1162; Entity Stat Nerf and Minimum Limit

#### 1.1.7 Win/Lose Condition Tests
- ID: 1171; Mockup Entity has no HP (different messages)
- ID: 1172; Mockup Entity has no possible attack anymore (no PP)
- ID: 1173; Turn order has exceeded a certain value

### 1.2. Integration Tests

#### 1.2.1 Battle System & UI Integration
- ID: INT_1211; Battle Initialization & UI Update  
  * Verify battle creation triggers proper UI elements (HP bars, move buttons)  
  * Check if entity stats are correctly displayed  
  * Ensure initial battle state is properly reflected in UI  

- ID: INT_1212; Combat Action & Visual Feedback  
  * Verify attack selection updates battle text  
  * Check if damage calculation reflects in HP bar update  
  * Ensure stat changes are visually indicated  

- ID: INT_1214; Template Loading & Battle Setup  
  * Verify template rules are correctly applied to battle instance  
  * Check if character stats are properly loaded from template  
  * Ensure damage calculator configuration is properly applied  

#### 1.2.2 Battle Flow Integration
- ID: INT_1221; Complete Attack Sequence  
  * Test full attack sequence from selection to resolution  
  * Verify all damage calculations are applied correctly  
  * Ensure proper order of operations in attack resolution  

- ID: INT_1222; Multiple Modifier Application  
  * Test interaction between different stat modifiers  
  * Verify correct order of modifier application  
  * Ensure modifier limits are properly enforced  

- ID: INT_1223; Move Effect Processing  
  * Test move effects are properly applied  

- ID: INT_1224; Turn Resolution Chain  
  * Verify correct turn order based on speed and modifiers  
  * Check turn state transitions  
  * Ensure proper handling of turn-based effects  

### 1.3. System Tests

#### 1.3.1 Complete Battle Flows
- ID: SYS_1311; Default Configuration Battle  
  * Test complete battle with default settings  
  * Verify all basic mechanics work together  
  * Ensure proper battle conclusion  

- ID: SYS_1312; Custom Rule Set Battle  
  * Test battle with modified rule combinations  
  * Verify rule interactions work correctly  
  * Ensure custom rules affect battle properly  

- ID: SYS_1313; Modified Character Battle  
  * Test battle with custom character configurations  
  * Verify modified stats work correctly  

- ID: SYS_1314; Alternative Calculator Battle  
  * Test battle with modified damage calculations  
  * Verify custom formulas work correctly  
  * Ensure calculator changes affect battle properly  

#### 1.3.2 Edge Cases
- ID: SYS_1321; Maximum Stats Battle  
  * Test battle with max stat values (999)  
  * Verify no overflow occurs  
  * Ensure proper handling of maximum values  

- ID: SYS_1322; Minimum Moves Battle  
  * Test battle with minimum move count (1)  
  * Verify proper handling of limited moves  
  * Ensure battle can still proceed  

- ID: SYS_1323; PP Depletion Scenario  
  * Test battle with PP running out  
  * Verify proper handling of no-PP situation  
  * Ensure appropriate battle conclusion  

- ID: SYS_1324; Multiple Rules Interaction  
  * Test complex rule combinations  
  * Verify rule priority system  
  * Ensure no conflicting rule applications  

### 1.4. Performance Tests

#### 1.4.1 Response Time Tests
- ID: PERF_1411; Battle Action Response  
  * Measure UI response time for battle actions  
  * Verify under 100ms threshold  
  * Test under various system loads  

- ID: PERF_1412; State Update Speed  
  * Measure time for battle state updates  
  * Verify real-time update capability  
  * Test multiple simultaneous updates  

- ID: PERF_1413; HP Bar Animation Performance  
  * Measure HP Bar change smoothness  
  * Verify frame rate consistency  

#### 1.4.2 Resource Usage Tests
- ID: PERF_1421; Memory Usage During Battle  
  * Monitor memory consumption  
  * Check for memory leaks  
  * Verify proper resource cleanup  

- ID: PERF_1422; CPU Usage Monitoring  
  * Track CPU usage during battles  
  * Identify processing bottlenecks  
  * Verify efficient resource utilization  

- ID: PERF_1423; Long Session Stability  
  * Test extended battle sessions  
  * Monitor resource usage over time  
  * Verify system stability  

#### 1.4.3 Load Tests
- ID: PERF_1431; Multiple Battle Management  
  * Test handling multiple battle instances  
  * Verify resource allocation  
  * Check system performance under load  

- ID: PERF_1432; Rapid Action Sequence  
  * Test system under rapid user inputs  
  * Verify handling of quick successive actions  
  * Check for action queue management  

- ID: PERF_1433; Resource Recovery  
  * Test system resource recovery after heavy load  
  * Verify memory/CPU usage normalization  
  * Check cleanup processes  

---

## 2. Interface

### 2.1. Unit Tests

#### 2.1.1 Window Creation Tests
- ID: 2111; Authentication Window (Login)
- ID: 2112; Battle-Related Windows (Battle Simulation, Character Selection)
- ID: 2113; Template Management Windows (Template Menu, Gallery, New Template)
- ID: 2114; Configuration Windows (Rules, Damage Calculator)

#### 2.1.2 Button Tests
- ID: 2121; Button Creation and Visual Properties
- ID: 2122; Button Click Signal Emission
- ID: 2123; Button State Management

#### 2.1.3 Label Tests
- ID: 2131; Label Creation and Display
- ID: 2132; Label Text Update

#### 2.1.4 Input Field Tests
- ID: 2141; Text Input Field Creation and Validation
- ID: 2142; Input Field Security Features
- ID: 2143; Input Field Error Management

#### 2.1.5 Image Tests
- ID: 2151; Image Creation and Insertion
- ID: 2152; Image Visual Properties Management

#### 2.1.6 Checkbox/Radio Tests
- ID: 2161; Checkbox Creation and Display
- ID: 2162; Checkbox Behavior Management

#### 2.1.7 Display Element Tests
- ID: 2171; HP Bar Creation and Management
- ID: 2172; Pokémon Info Display Management
- ID: 2173; Battle Text System Management
- ID: 2174; Pop-Up Message System

#### 2.1.8 Menu Component Tests
- ID: 2181; Menu Creation with Items
- ID: 2182; Menu Interaction Management (signals, stacked widget)

### 2.2. Integration Tests

#### 2.2.1 Window Navigation Flow
- ID: INT_2211; Menu Navigation Chain
  * Test complete navigation flow between all windows
  * Verify proper state preservation during transitions
  * Ensure back/forward navigation works correctly

- ID: INT_2212; Data Persistence Across Views
  * Verify data maintains consistency across window changes
  * Check state preservation during navigation
  * Ensure proper data cleanup on window closure

#### 2.2.2 UI Component Interaction
- ID: INT_2221; Form Submission Integration
  * Test form data collection and validation
  * Verify error handling and display
  * Ensure proper data transmission to backend

- ID: INT_2222; Dynamic UI Updates
  * Test real-time UI updates based on user actions
  * Verify proper event handling and display updates
  * Ensure UI state consistency

### 2.3. System Tests

#### 2.3.1 Complete UI Workflows

- ID: SYS_2311; Template Creation Workflow
  * Test complete template creation process
  * Verify all UI elements work together
  * Ensure proper data saving and validation

- ID: SYS_2312; Battle Configuration Workflow
  * Test battle setup through UI
  * Verify all configuration options work together
  * Ensure proper battle initialization

#### 2.3.2 Error Handling

- ID: SYS_2321; Input Validation System
  * Test comprehensive input validation
  * Verify error message display
  * Ensure proper error recovery flows

- ID: SYS_2322; System State Recovery
  * Test UI recovery after errors
  * Verify state preservation during errors
  * Ensure proper error logging and display

### 2.4. Performance Tests

#### 2.4.1 UI Response Times

- ID: PERF_2411; Window Transition Speed
  * Measure window transition times
  * Verify under 200ms threshold
  * Test under various system loads

- ID: PERF_2412; Input Response Time
  * Measure UI response to user inputs
  * Verify under 100ms threshold
  * Test multiple rapid inputs

#### 2.4.2 Resource Management

- ID: PERF_2421; Memory Usage During UI Operations
  * Monitor memory usage during UI operations
  * Check for memory leaks in UI components
  * Verify proper resource cleanup

- ID: PERF_2422; UI Scaling Performance
  * Test UI performance at different resolutions
  * Verify proper scaling behavior
  * Ensure consistent performance across displays

---

## 3. Template Configuration

### 3.1. Unit Tests

#### 3.1.1 Database Management
- ID: 3111; Database Creation, Connection and Verification
- ID: 3112; Read Database Values
- ID: 3113; Update Database Values
- ID: 3114; Delete Database Values

#### 3.1.2 Rules Management
- ID: 3121; Retrieve Rule State
- ID: 3122; Detect Rules Activation/Deactivation (checked)
- ID: 3123; Delete Rules Value Change (if specific number needed)
- ID: 3124; Retrieve set of rules combination

#### 3.1.3 Characters Management
- ID: 3131; Retrieve 6 Characters and their data (stat, moveset, type, name, level)
- ID: 3132; Detect Character selected/unselected
- ID: 3123; Retrieve 2 selected characters List

#### 3.1.4 Template Management
- ID: 3141; Create Battle Template
- ID: 3142; Modify Template Settings with fake characters, set of rules, damage calculator and name
- ID: 3143; Delete Template
- ID: 3144; Load created template (get its data)

#### 3.1.5 Damage Calculator Management
- ID: 3151; Get Damage Calculator Settings
- ID: 3152; Modify Calculator Input values
- ID: 3153; Retrieve Original Calculator Setup
- ID: 3154; Modify Calculator Formula
- ID: 3155; Formula Validation Tests
  * Verify rejection of invalid mathematical operators
  * Check for proper parentheses matching
  * Test handling of invalid variable names
  * Verify rejection of division by zero scenarios

- ID: 3156; Input Boundary Tests
  * Test handling of negative numbers
  * Verify maximum value limitations
  * Check decimal number handling
  * Test empty input handling

- ID: 3157; Formula Error Message Tests
  * Verify appropriate error message for syntax errors
  * Check error message for invalid variables
  * Test error message for mathematical impossibilities
  * Verify error state cleanup after correction

### 3.2. Integration Tests

#### 3.2.1 Template & Database Integration

- ID: INT_3211; Template-Database Operations
  * Test template saving and loading with database
  * Verify proper data persistence
  * Ensure database integrity during operations

- ID: INT_3212; Rule Configuration Integration
  * Test rule changes with template system
  * Verify proper rule combination handling
  * Ensure rule state persistence

- ID: INT_3213; Calculator-UI Error Display
  * Test error message propagation to UI
  * Verify UI state during error conditions
  * Ensure proper error recovery flow in UI

#### 3.2.2 Character & Template Integration

- ID: INT_3221; Character Selection System
  * Test character selection and template integration
  * Verify proper character data handling
  * Ensure character state persistence

### 3.3. System Tests

#### 3.3.1 Complete Template Workflows

- ID: SYS_3311; Template Creation Process
  * Test complete template creation workflow
  * Verify all components work together
  * Ensure proper data handling and storage

- ID: SYS_3312; Template Modification Process
  * Test template modification workflow
  * Verify proper update handling
  * Ensure data consistency

#### 3.3.2 Edge Cases

- ID: SYS_3321; Maximum Configuration Testing
  * Test template with maximum allowed settings
  * Verify system handles maximum values
  * Ensure proper error handling

- ID: SYS_3322; Invalid Configuration Testing
  * Test template with invalid combinations
  * Verify proper error handling
  * Ensure system stability

### 3.4. Performance Tests

#### 3.4.1 Template Operation Speed

- ID: PERF_3411; Template Load Time
  * Measure template loading speed
  * Verify under 500ms threshold
  * Test with various template sizes

- ID: PERF_3412; Save Operation Performance
  * Measure template save operation speed
  * Verify proper database transaction handling
  * Test multiple rapid saves

#### 3.4.2 Database Performance
- ID: PERF_3421; Database Query Speed
  * Measure database operation response times
  * Verify under 500ms threshold
  * Test with various data loads

- ID: PERF_3422; Concurrent Operation Handling
  * Test multiple simultaneous database operations
  * Verify proper transaction management
  * Ensure data consistency under load
