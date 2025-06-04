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
| ID       | Description                                                                                  | Priority | Pre-requisites                                                                                   | Procedure                                                                                              | Exp                                                                                     | Out | Status       |
|----------|----------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------|-----|--------------|
| UNT_1111 | Verify that the `Entity` class can be instantiated and correctly initialized with values such as name, level, stats, and type. Ensure all properties are properly assigned and retrievable. | Critical | 1. Class files (`Entity.cpp`, `Entity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize an `Entity` object with test values.  <br /> 3. Use assertions to verify each member is correctly set. | The unit test should pass, confirming all properties are correctly initialized and retrievable. | N/A | To be tested |
| UNT_1112 | Verify that the current HP of an `Entity` instance is correctly tracked and returned. Test proper initialization and retrieval of remaining HP. | Critical | 1. Class files (`Entity.cpp`, `Entity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize an `Entity` object with a known HP value.  <br /> 3. Use assertions to verify that the remaining HP is correctly returned. | The unit test should pass, confirming the correct initialization and access to remaining HP. | N/A | To be tested |
| UNT_1113 | Verify that an `Entity` instance can be assigned a moveset composed of 4 mock `Capacity` objects. Ensure each move is stored and accessible. | High | 1. Class files (`Entity.cpp`, `Entity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize an `Entity` object.  <br /> 3. Create 4 mock `Capacity` instances and store them in a list or array.  <br /> 4. Assign the moveset to the entity and use assertions to verify each move. | The unit test should pass, confirming the moveset is correctly assigned and all 4 capacities are accessible. | N/A | To be tested |
| UNT_1135  | Verify that the `Entity` class can randomly select one of four mock `Capacity` instances from its moveset, with equal probability (25% each). This simulates a basic AI decision-making process. | Medium   | 1. Class files (`Entity.cpp`, `Entity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Create an `Entity` instance.  <br /> 3. Create four mock `Capacity` instances and store them in a list or array.  <br /> 4. Assign the moveset to the entity.  <br /> 5. Call the selection function multiple times and verify that all four capacities are chosen over time with roughly equal distribution. | Unit test should pass, confirming that each `Capacity` has an equal chance of being selected. | N/A    | To be tested |


#### 1.1.2 Capacity Creation Tests
| ID       | Description                                                                                  | Priority | Pre-requisites                                                                                   | Procedure                                                                                              | Expected                                                                                 | Output | Status       |
|----------|----------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------|--------|--------------|
| UNT_1121 | Verify that the `Capacity` class can be instantiated and correctly initialized with values sucg as name, attack power, power points, category, and effect type. Ensure all properties are properly assigned and retrievable. | Critical | 1. Class files (`capacity.cpp`, `capacity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Capacity` object with test values.  <br /> 3. Use assertions to verify each member is correctly set. | Unit test should pass, confirming all properties are correctly initialized and retrievable. | N/A    | To be tested |
| UNT_1122 | Verify that the remaining power points (PP) of a `Capacity` object are correctly tracked and retrievable. Ensure accurate initialization and access. | High     | 1. Class files (`capacity.cpp`, `capacity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Capacity` object with a known PP value.  <br /> 3. Use assertions to verify the remaining PP is correctly returned. | Unit test should pass, confirming correct tracking and retrieval of PP.                  | N/A    | To be tested |
| UNT_1123 | Verify that a `Capacity` object can be assigned a stat modifier structure and that all modifier values are correctly stored and accessible. | Medium   | 1. Class files (`capacity.cpp`, `capacity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Capacity` object.  <br /> 3. Create a stat modifier structure.  <br /> 4. Assign it and use assertions to verify each value. | Unit test should pass, confirming the stat modifier is correctly assigned and accessible. | N/A    | To be tested |


#### 1.1.3 Battle Creation Tests

| ID        | Description                                                                                                                       | Priority | Pre-requisites                                                                                   | Procedure                                                                                                                                                       | Expected                                                                                 | Output | Status       |
|-----------|-----------------------------------------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------|--------|--------------|
| UNT_1131  | Verify that the `Battle` class can be instantiated and correctly initialized with mock entities, a `BattleState`, and a turn value. Ensure all properties are properly assigned and retrievable. | Critical | 1. Class files (`Battle.cpp`, `Battle.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Battle` object with test values for entities, state, and turn.  <br /> 3. Use assertions to verify each member is correctly set. | Unit test should pass, confirming that the `Battle` object is properly initialized.     | N/A    | To be tested |
| UNT_1132  | Verify that the `BattleState` of a `Battle` object can be changed and correctly reflects the new state.                           | High     | 1. Class files (`Battle.cpp`, `Battle.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Battle` object.  <br /> 3. Change its `BattleState` to another value.  <br /> 4. Use assertions to verify the state change occurred. | Unit test should pass, confirming that the state change is handled correctly.            | N/A    | To be tested |
| UNT_1133  | Verify that the turn order logic selects the faster entity based on their speed stat. If both speeds are equal, verify the system uses a 50% random selection between the two. | High     | 1. Class files (`Battle.cpp`, `Battle.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Create two mock entities with differing speed stats and assign them to a `Battle`.  <br /> 3. Use assertions to verify the faster one acts first.  <br /> 4. Repeat with equal speed values to test random turn handling. | Unit test should pass, confirming speed comparison and random resolution for ties.       | N/A    | To be tested |
| UNT_1134  | Verify that the `Battle` class correctly increments the turn counter when a new turn begins.                                       | Medium   | 1. Class files (`Battle.cpp`, `Battle.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Battle` object with a known turn value.  <br /> 3. Call the method that increments the turn.  <br /> 4. Use assertions to verify the turn was incremented. | Unit test should pass, confirming that the turn value increments as expected.            | N/A    | To be tested |




#### 1.1.4 Damage Calculation Tests

| ID        | Description                                                                                                                  | Priority | Pre-requisites                                                                                   | Procedure                                                                                                                                                        | Expected                                                                  | Output | Status       |
|-----------|------------------------------------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------|--------|--------------|
| UNT_1141  | Verify that base damage is correctly calculated according to standard formula using inputs such as level, attack, power, and defense. | Critical | 1. Class files responsible for damage calculation (e.g., `Battle.cpp`, `Battle.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Provide known input values: attacker level, attack stat, move power, and defender's defense.  <br /> 3. Call the damage calculation function.  <br /> 4. Use assertions to verify the result matches the expected value based on the formula. | Unit test should pass, confirming that the base damage is calculated accurately. | N/A    | To be tested |
| UNT_1142  | Verify that healing is correctly calculated based on the healing percentage, current HP, and max HP.                          | Medium   | 1. Class files responsible for healing logic must be created and available.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a mockup entity with known `currentHP` and `maxHP`.  <br /> 3. Apply a healing percentage.  <br /> 4. Use assertions to confirm the resulting HP is correct and does not exceed `maxHP`. | Unit test should pass, confirming that healing is accurately applied. | N/A    | To be tested |
| UNT_1143  | Verify that a stat increase (buff) is correctly calculated and applied to a mockup entity's stat.                                   | Medium   | 1. Class files responsible for stat modification must be created and available.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a mockupentity with a known stat value.  <br /> 3. Apply a buff of a certain amount.  <br /> 4. Use assertions to verify the new stat value is correct. | Unit test should pass, confirming the buff is correctly applied.       | N/A    | To be tested |
| UNT_1144  | Verify that a stat decrease (nerf) is correctly calculated and applied to a mockup entity's stat.                                   | Medium   | 1. Class files responsible for stat modification must be created and available.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a mockup entity with a known stat value.  <br /> 3. Apply a nerf of a certain amount.  <br /> 4. Use assertions to verify the new stat value is correct. | Unit test should pass, confirming the nerf is correctly applied.       | N/A    | To be tested |
| UNT_1145  | Verify that the STAB (Same-Type Attack Bonus) is correctly applied when a mockup entity uses a mockup capacity that matches its type.          | Medium   | 1. Class files responsible for damage logic must be created and available.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Create a mockup entity and a mockup capacity with matching types.  <br /> 3. Calculate STAB-adjusted damage.  <br /> 4. Use assertions to verify the damage includes the STAB multiplier (e.g., 1.5x). | Unit test should pass, confirming STAB is applied correctly.           | N/A    | To be tested |
| UNT_1146  | Verify that the critical hit bonus is correctly applied when a critical hit occurs in a damage calculation.                   | Medium   | 1. Class files responsible for damage logic must be created and available.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Provide a scenario where a critical hit is guaranteed (e.g., force the flag).  <br /> 3. Call the damage function and verify the bonus multiplier (e.g., 1.5x or 2x) is applied. | Unit test should pass, confirming critical hit bonus is applied properly. | N/A    | To be tested |

#### 1.1.5 HP Management Tests
| ID        | Description                                                                                     | Priority | Pre-requisites                                                                                   | Procedure                                                                                                                                                        | Expected                                                                   | Output | Status       |
|-----------|-------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------|--------|--------------|
| UNT_1151  | Verify that a mockup entity correctly handles damage and sets HP to zero when appropriate.       | Critical | 1. Mockup entity class must exist and be included in the test project.  <br /> 2. Qt Test framework must be properly set up. | 1. Write a unit test using a mockup entity.  <br /> 2. Assign a known HP value and apply damage greater than or equal to it.  <br /> 3. Use assertions to confirm resulting HP is 0 and any "faint" flag or equivalent is triggered. | Unit test should pass, confirming damage and zero HP logic.               | N/A    | To be tested |
| UNT_1152  | Verify that a mockup entity heals properly and does not exceed its maximum HP.                   | Medium   | 1. Mockup entity class must exist and be included in the test project.  <br /> 2. Qt Test framework must be properly set up. | 1. Write a unit test using a mockup entity.  <br /> 2. Assign known values for currentHP and maxHP.  <br /> 3. Apply healing.  <br /> 4. Use assertions to verify resulting HP is correct and does not exceed maxHP. | Unit test should pass, confirming healing and full HP handling.          | N/A    | To be tested |


#### 1.1.6 Stat Change Tests
| ID        | Description                                                                                     | Priority | Pre-requisites                                                                                   | Procedure                                                                                                                                                        | Expected                                                                   | Output | Status       |
|-----------|-------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------|--------|--------------|
| UNT_1161  | Verify that stat buffs applied to a mockup entity do not exceed the allowed maximum limit.       | Medium   | 1. Mockup entity class with stat management must be included.  <br /> 2. Qt Test framework must be properly set up. | 1. Write a unit test using a mockup entity.  <br /> 2. Apply repeated buffs to a stat.  <br /> 3. Use assertions to confirm the stat caps at the defined maximum. | Unit test should pass, confirming maximum buff limit is enforced.         | N/A    | To be tested |
| UNT_1162  | Verify that stat nerfs applied to a mockup entity do not go below the allowed minimum limit.     | Medium   | 1. Mockup entity class with stat management must be included.  <br /> 2. Qt Test framework must be properly set up. | 1. Write a unit test using a mockup entity.  <br /> 2. Apply repeated nerfs to a stat.  <br /> 3. Use assertions to confirm the stat caps at the defined minimum. | Unit test should pass, confirming minimum nerf limit is enforced.         | N/A    | To be tested |


#### 1.1.7 Win/Lose Condition Tests
| ID        | Description                                                                                                                  | Priority | Pre-requisites                                                                                   | Procedure                                                                                                                                                        | Expected                                                                   | Output | Status       |
|-----------|------------------------------------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------|--------|--------------|
| UNT_1171  | Verify that when a mockup entity has 0 HP, the correct defeat message or outcome is triggered.                               | Critical | 1. Mockup entity class must support message generation or defeat flag.  <br /> 2. Qt Test framework must be properly set up. | 1. Write a unit test using a mockup entity.  <br /> 2. Reduce HP to 0.  <br /> 3. Use assertions to check if appropriate message or lose condition is activated. | Unit test should pass, confirming 0 HP triggers correct defeat handling.   | N/A    | To be tested |
| UNT_1172  | Verify that a mockup entity with no usable attacks (0 PP on all 4 mock moves) triggers a no-action condition.                 | Medium   | 1. Mockup entity with fake move list (4 moves) and PP values must be available.  <br /> 2. Qt Test framework must be set up. | 1. Write a unit test using a mockup entity.  <br /> 2. Set all mock move PP to 0.  <br /> 3. Assert that the system detects no available action.                | Unit test should pass, confirming no-attack state is handled correctly.    | N/A    | To be tested |
| UNT_1173  | Verify that exceeding a maximum number of turns in a mockup battle triggers a tie or timeout condition.                       | Medium   | 1. Mockup battle class with turn count tracking must exist.  <br /> 2. Qt Test framework must be set up. | 1. Write a unit test using a mockup battle.  <br /> 2. Simulate turns until limit is exceeded.  <br /> 3. Use assertions to confirm the expected outcome (e.g., tie/end condition). | Unit test should pass, confirming turn limit handling functions correctly. | N/A    | To be tested |


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
| ID       | Description                                                                                  | Priority | Pre-requisites                                                                                   | Procedure                                                                                              | Exp                                                                                     | Out | Status       |
|----------|----------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------|-----|--------------|
| UNT_2111 | Verify that the `AuthenticationMenu` window (Login) can be instantiated and displayed from its corresponding `.ui` file. Ensure the widget loads and becomes visible. | Medium   | 1. The `.ui` file for the Login window must exist.  <br /> 2. The corresponding class must be generated and properly set up. | 1. Instantiate the Login window class. <br /> 2. Use Qt functions to check if the widget is valid and visible. | UI widget is successfully created and appears visible.                                 | N/A | To be tested |
| UNT_2112  | Verify that both `simulationMenu` (**Critical**) and `CharacterSelectionMenu` (**Medium**) windows are correctly created and visible upon instantiation. | Mixed     | 1. Both `.ui` files must exist.  <br /> 2. Corresponding classes must be implemented.                  | 1. Instantiate both windows.  <br /> 2. Verify visibility and proper rendering of each.                    | Both widgets are successfully created and displayed.                         | N/A    | To be tested |
| UNT_2113  | Ensure that all Template Management windows are properly created and visible: <br />– `MainTemplateMenu` (**Critical**) <br />– `NewTemplateMenu` (**Medium**) <br />– `TemplateGalleryMenu` (**Low**) | Mixed    | 1. `.ui` files for all three windows must exist. <br /> 2. Each corresponding class must be implemented and compilable. | 1. Instantiate each of the three window classes. <br /> 2. Confirm that each UI widget appears correctly. | All three windows are correctly instantiated and visible on screen.             | N/A    | To be tested |
| UNT_2114  | Confirm that Configuration windows are properly created and visible: <br />– `rulesmenu` (**High**) <br />– `DamageCalculatorMenu` (**Low**) | Mixed    | 1. Corresponding `.ui` files and their respective classes must be available and compilable.                   | 1. Instantiate both `rulesmenu` and `DamageCalculatorMenu` classes. <br /> 2. Verify visibility of each. | Both configuration windows are successfully loaded and shown on screen.       | N/A    | To be tested |


#### 2.1.2 Button Tests
| ID       | Description                                                                                         | Priority | Pre-requisites                                                                                           | Procedure                                                                                                                                                                                 | Expected Result                                                                                  | Output | Status       |
|----------|-----------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_2121 | Verify that a button can be created and its visual properties (text, size, style, color) adjusted. | Critical | 1. Qt Creator must be open with a working project.                                                       | 1. Create a `.ui` file in the project. <br /> 2. Use the UI editor to add a button widget. <br /> 3. Run the project to verify the button appears. <br /> 4. Modify the button’s text, size, and style properties in the UI editor. <br /> 5. Re-run and observe changes. | The button appears on the interface with the specified text, size, and style formatting.         | N/A    | To be tested |
| UNT_2122 | Verify that a button emits the `clicked()` signal when clicked.                                     | Critical | 1. The `.ui` file must exist and contain a QPushButton element.                                          | 1. Access the button using `findChild<QPushButton*>()`. <br /> 2. Use `QTest::mouseClick()` to simulate a click. <br /> 3. Use `QSignalSpy` to check signal emissions.                      | The `clicked()` signal is emitted exactly once upon simulated click.                            | N/A    | To be tested |
| UNT_2123 | Verify that the button's state (visible/hidden, enabled/disabled) can be changed programmatically.  | Medium   | 1. A `.ui` file with a QPushButton must be created and available.                                        | 1. Locate the button using `findChild<QPushButton*>()`. <br /> 2. Programmatically change its visibility (`setVisible(false)`), then check state. <br /> 3. Change `setEnabled(false)` and check. | Button becomes hidden/disabled as expected, and changes are accurately reflected in the UI.     | N/A    | To be tested |


#### 2.1.3 Label Tests
| ID       | Description                                                                                       | Priority | Pre-requisites                                                                                         | Procedure                                                                                                                                                                                     | Expected Result                                                                      | Output | Status       |
|----------|---------------------------------------------------------------------------------------------------|----------|----------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|--------|--------------|
| UNT_2131 | Verify that a QLabel is created and displays the expected text with correct formatting.          | Critical | 1. Qt Creator must be open with a working project. <br /> 2. QLabel widget must be available in `.ui`.  | 1. Create a `.ui` file and add a QLabel using the UI editor. <br /> 2. Set sample text, font size, and style via the property panel. <br /> 3. Run the project and confirm the label appears as configured. | QLabel is visible and displays the correct text with defined size and style.          | N/A    | To be tested |
| UNT_2132 | Verify that QLabel text can be updated dynamically via code.                                      | High     | 1. The `.ui` file must exist and contain a QLabel element.                                              | 1. Locate the QLabel using `findChild<QLabel*>()`. <br /> 2. Use `setText("New Text")` to update its text. <br /> 3. Use an assertion to confirm the text has been updated (`label->text()`).    | QLabel's text is updated in the interface to the new value programmatically.          | N/A    | To be tested |


#### 2.1.4 Login Input Field Tests
| ID       | Description                                                                                             | Priority | Pre-requisites                                                                                           | Procedure                                                                                                                                                                                                                      | Expected Result                                                                                  | Output | Status       |
|----------|---------------------------------------------------------------------------------------------------------|----------|------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_2141 | Verify creation of login and password input fields using `QLineEdit` and validate basic layout behavior. | Medium   | 1. Qt Creator must be open with a working project. <br /> 2. `QLineEdit` widgets must be placed in the `.ui` file. | 1. Create a `.ui` file and add two `QLineEdit` widgets for login and password. <br /> 2. Add a `QPushButton` for login confirmation. <br /> 3. Run the UI and ensure fields are visible and editable.                         | Input fields for login and password are displayed correctly and accept user input.              | N/A    | To be tested |
| UNT_2142 | Verify that the password input field hides characters as the user types.                                 | Medium   | 1. `.ui` file must contain a `QLineEdit` configured for password entry.                                   | 1. Locate the password input field using `findChild<QLineEdit*>()`. <br /> 2. Set its echo mode using `setEchoMode(QLineEdit::Password)`. <br /> 3. Simulate user typing.                                                       | Characters typed into the password field are visually hidden (e.g., replaced by dots).          | N/A    | To be tested |
| UNT_2143 | Verify input field error handling for incorrect login or password submission.                           | Medium   | 1. `.ui` file must contain login form fields and a submit button.                                         | 1. Access login and password `QLineEdit` widgets in code. <br /> 2. Set up logic with `if/else` to compare input against correct values. <br /> 3. Simulate incorrect input and press the button. <br /> 4. Display error label. | When incorrect data is submitted, an error message or visual indicator is shown to the user.    | N/A    | To be tested |


#### 2.1.5 Image Tests
| ID       | Description                                                                                 | Priority | Pre-requisites                                                                                      | Procedure                                                                                                                                                                                                 | Expected Result                                                                               | Output | Status       |
|----------|---------------------------------------------------------------------------------------------|----------|-------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------|--------|--------------|
| UNT_2151 | Verify that an image can be inserted and displayed in the UI using a QLabel.               | Medium   | 1. Qt Creator must be open with a working project. <br /> 2. An `images/` folder must exist next to the project. | 1. Create a `.ui` file and add a `QLabel` to hold the image. <br /> 2. Place the image file in the `images/` folder. <br /> 3. In code, use `QPixmap` and `setPixmap()` to load and insert the image into the label. <br /> 4. Run the project to verify. | The image is displayed in the `QLabel` on the UI as expected.                               | N/A    | To be tested |
| UNT_2152 | Verify that visual properties of the inserted image (size, alignment, scaling) are applied correctly. | Medium   | 1. A `.ui` file must exist with a `QLabel` displaying an image. <br /> 2. The image source must still be present. | 1. Locate the image label using `findChild<QLabel*>()`. <br /> 2. Apply visual changes using methods like `setFixedSize()`, `setAlignment()`, or `setScaledContents(true)`. <br /> 3. Run the project to observe the effects.                       | The image is displayed with the specified size, alignment, and scaling properties.            | N/A    | To be tested |

#### 2.1.6 Checkbox/Radio Tests
| ID       | Description                                                                     | Priority | Pre-requisites                                                                                       | Procedure                                                                                                                                                                       | Expected Result                                                                                  | Output | Status       |
|----------|----------------------------------------------------------------------------------|----------|--------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_2161 | Verify that a checkbox can be created and displayed in the UI.                  | High     | 1. Qt Creator must be open with a working project.                                                    | 1. Create a `.ui` file. <br /> 2. Add a `QCheckBox` widget to the form using the UI editor. <br /> 3. Run the project.                                                          | The `QCheckBox` is visible in the UI and can be checked or unchecked.                            | N/A    | To be tested |
| UNT_2162 | Verify that the checkbox emits signals correctly when toggled.                  | High     | 1. A `.ui` file must be created and must contain a `QCheckBox` widget.                                | 1. Locate the checkbox in code using `findChild<QCheckBox*>()`. <br /> 2. Connect its `stateChanged(int)` or `toggled(bool)` signal to a slot or test handler. <br /> 3. Simulate check/uncheck and observe the signal behavior. | The checkbox emits appropriate signals when its state changes (checked/unchecked).                | N/A    | To be tested |


#### 2.1.7 Display Element Tests
| ID        | Description                                                                       | Priority | Pre-requisites                                                                                               | Procedure                                                                                                                                                                                                                 | Expected Result                                                                                                  | Output | Status       |
|-----------|------------------------------------------------------------------------------------|----------|--------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_2171  | Validate creation and dynamic update of the HP bar based on HP/max HP values.     | Critical | 1. Qt Creator must be open with a working project.                                                           | 1. Create a `.ui` file. <br /> 2. Add a progress bar or custom gauge widget to represent HP. <br /> 3. In code, initialize it with test values for current and max HP. <br /> 4. Run the project. <br /> 5. Modify HP value and observe update. | The HP bar is displayed, accurately reflecting current HP in proportion to the max value, and updates dynamically. | N/A    | To be tested |
| UNT_2172  | Verify display of Pokémon details (name, sprite, and numeric HP).                 | High     | 1. Qt Creator must be open. <br /> 2. Pokémon sprite image must exist in the project’s image folder.         | 1. Create a `.ui` file. <br /> 2. Add a `QLabel` for the name and HP, and an image display widget. <br /> 3. Load and assign a test Pokémon name, sprite, and HP. <br /> 4. Run the project. <br /> 5. Change HP in code and observe the update. | The UI correctly displays the Pokémon’s name, sprite, and HP, and updates the HP value when changed in code.       | N/A    | To be tested |
| UNT_2173  | Verify correct display and updating of capacity (attack) buttons with PP values.  | Critical | 1. Qt Creator must be open with a working project.                                                           | 1. Create a `.ui` file. <br /> 2. Add a `QPushButton` to represent a move. <br /> 3. Set the button text to show the move’s name and remaining PP. <br /> 4. Run the project. <br /> 5. Simulate PP decrease and update button text.          | The button shows the move name and PP, and updates correctly after a simulated use (PP -1).                        | N/A    | To be tested |
| UNT_2174  | Validate the dynamic update of battle text in a label widget.                     | Medium   | 1. Qt Creator must be open with a working project.                                                           | 1. Create a `.ui` file. <br /> 2. Add a `QLabel` to hold battle narration. <br /> 3. Run the project to confirm visibility. <br /> 4. Programmatically update the label’s text. <br /> 5. Run and verify updated text appears as expected.       | Battle narration is shown inside the label and updates successfully as the text changes.                          | N/A    | To be tested |
| UNT_2175  | Validate that pop-up message windows can be triggered and displayed properly.     | Medium   | 1. Qt Creator must be open with a working project.                                                           | 1. Create a `.ui` file. <br /> 2. Implement a message box or custom popup dialog in code. <br /> 3. Trigger the popup from a simulated event. <br /> 4. Run the project and confirm popup is displayed.                              | A message popup appears when triggered, showing the desired content or alert.                                     | N/A    | To be tested |

#### 2.1.8 Menu Component Tests
| ID        | Description                                                                       | Priority | Pre-requisites                                                                                          | Procedure                                                                                                                                                                                                                                  | Expected Result                                                                                                 | Output | Status       |
|-----------|------------------------------------------------------------------------------------|----------|-----------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_2181  | Verify creation of a main menu with UI elements.                                  | Critical | 1. Qt Creator must be open with a working project.                                                        | 1. Create a new `.ui` file. <br /> 2. Use the UI editor to add a QWidget window. <br /> 3. Insert various UI elements (e.g., buttons, labels) into the window. <br /> 4. Run the project and ensure the widget window appears as expected.   | The QWidget window is displayed with all added UI elements properly visible and interactive.                    | N/A    | To be tested |
| UNT_2182  | Validate navigation between pages using a QStackedWidget and button signals.       | High     | 1. A `.ui` file with a QStackedWidget has been created.                                                   | 1. Add a `QStackedWidget` with two pages. <br /> 2. On Page 1, add unique UI elements including a navigation button. <br /> 3. On Page 2, add different UI elements and another button. <br /> 4. Implement signal-slot connections in code so each button switches between the two pages. <br /> 5. Run the project. <br /> 6. Click the button on Page 1 to go to Page 2. <br /> 7. On Page 2, click the button to return to Page 1. | Buttons successfully switch between Page 1 and Page 2 of the QStackedWidget, each displaying different content. | N/A    | To be tested |


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
- ID: 3111; Database Creation, Connection and Verification;;;;;N/A;To be tested
- ID: 3112; Read Database Values;;;;;N/A;To be tested
- ID: 3113; Update Database Values;;;;;N/A;To be tested
- ID: 3114; Delete Database Values;;;;;N/A;To be tested

#### 3.1.2 Rules Management
- ID: 3121; Retrieve Rule State;;;;;N/A;To be tested
- ID: 3122; Detect Rules Activation/Deactivation (checked);;;;;N/A;To be tested
- ID: 3123; Delete Rules Value Change (if specific number needed);;;;;N/A;To be tested
- ID: 3124; Retrieve set of rules combination;;;;;N/A;To be tested

#### 3.1.3 Characters Management
- ID: 3131; Retrieve 6 Characters and their data (stat, moveset, type, name, level);;;;;N/A;To be tested
- ID: 3132; Detect Character selected/unselected;;;;;N/A;To be tested
- ID: 3123; Retrieve 2 selected characters List;;;;;N/A;To be tested

#### 3.1.4 Template Management
- ID: 3141; Create Battle Template;;;;;N/A;To be tested
- ID: 3142; Modify Template Settings with fake characters, set of rules, damage calculator and name;;;;;N/A;To be tested
- ID: 3143; Delete Template;;;;;N/A;To be tested
- ID: 3144; Load created template (get its data);;;;;N/A;To be tested

#### 3.1.5 Damage Calculator Management
- ID: 3151; Get Damage Calculator Settings;;;;;N/A;To be tested
- ID: 3152; Modify Calculator Input values;;;;;N/A;To be tested
- ID: 3153; Retrieve Original Calculator Setup;;;;;N/A;To be tested
- ID: 3154; Modify Calculator Formula;;;;;N/A;To be tested
- ID: 3155; Formula Validation Tests;;;;;N/A;To be tested
  * Verify rejection of invalid mathematical operators
  * Check for proper parentheses matching
  * Test handling of invalid variable names
  * Verify rejection of division by zero scenarios

- ID: 3156; Input Boundary Tests;;;;;N/A;To be tested
  * Test handling of negative numbers
  * Verify maximum value limitations
  * Check decimal number handling
  * Test empty input handling

- ID: 3157; Formula Error Message Tests;;;;;N/A;To be tested
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
