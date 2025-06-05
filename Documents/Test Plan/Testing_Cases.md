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
| UNT_1121 | Verify that the `Capacity` class can be instantiated and correctly initialized with values such as name, attack power, power points, category, and effect type. Ensure all properties are properly assigned and retrievable. | Critical | 1. Class files (`capacity.cpp`, `capacity.h`) must be created and available in the project.  <br /> 2. Qt Test framework must be properly set up and configured | 1. Write a unit test in the Qt test framework.  <br /> 2. Initialize a `Capacity` object with test values.  <br /> 3. Use assertions to verify each member is correctly set. | Unit test should pass, confirming all properties are correctly initialized and retrievable. | N/A    | To be tested |
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
| ID | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|-----------|----------------|------------|----------|--------|---------|
| INT_1211 | Verify that battle creation properly initializes and updates all UI elements, ensuring proper display of entity stats, HP bars, and move buttons. | Critical | 1. All related unit tests must have passed (UNT_1111, UNT_1131, UNT_2171, UNT_2172, UNT_2173) <br /> 2. Entity and Battle classes must be implemented <br /> 3. UI components must be created and available <br /> | 1. Create a battle instance with two entities <br /> 2. Initialize the UI components (HP bars, stat displays, move buttons) <br /> 3. Link battle state to UI elements <br /> 4. Verify initial UI state matches battle data <br /> 5. Trigger battle state changes <br /> 6. Verify UI updates reflect the changes | All UI elements correctly display and update according to battle state changes | N/A | To be tested |
| INT_1212 | Verify that combat actions properly trigger visual feedback, including battle text updates, HP bar changes, and stat modification indicators. | Medium | 1. All related unit tests must have passed (UNT_1141, UNT_1142, UNT_2171, UNT_2173, UNT_2174) <br /> 2. Battle system must be operational <br /> 3. UI components must be responsive <br />  | 1. Initialize a battle with test entities <br /> 2. Set up UI elements for battle feedback <br /> 3. Execute a test attack sequence <br /> 4. Verify HP bar updates <br /> 5. Check battle text changes <br /> 6. Confirm visual indicators for stat changes | Combat actions correctly trigger all associated visual feedback elements | N/A | To be tested |
| INT_1213 | Verify that battle templates properly load and configure both battle system and UI elements according to specified rules. | Low | 1. All related unit tests must have passed (UNT_1131, UNT_3141, UNT_3144) <br /> 2. Template system must be operational <br /> 3. Battle system must be configurable <br /> | 1. Create a test battle template <br /> 2. Load template into battle system <br /> 3. Initialize UI with template settings <br /> 4. Verify battle rules are applied <br /> 5. Check character stats loading <br /> 6. Confirm damage calculator configuration | Battle system and UI correctly reflect template configuration | N/A | To be tested |

#### 1.2.2 Battle Flow Integration
| ID | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|-----------|----------------|------------|----------|--------|---------|
| INT_1221 | Verify that a complete attack sequence executes properly from selection to resolution, including damage calculation and HP updates. | Critical | 1. All related unit tests must have passed (UNT_1112, UNT_1141, UNT_1151, UNT_2121, UNT_2171) <br /> 2. Battle system must be operational <br /> 3. Entity damage calculation system must be implemented | 1. Initialize a battle with two test entities <br /> 2. Select an attack for the first entity <br /> 3. Execute the attack sequence <br /> 4. Calculate and apply damage <br /> 5. Update HP values <br /> 6. Verify battle state after attack | Complete attack sequence executes in correct order with proper damage calculation and HP updates | N/A | To be tested |
| INT_1222 | Verify that multiple modifiers (buffs, STAB, critical hits) are properly applied and interact correctly during damage calculation. | Medium | 1. All related unit tests must have passed (UNT_1141, UNT_1143, UNT_1145, UNT_1146, UNT_1161) <br /> 2. Modifier system must be implemented <br /> 3. Damage calculation system must support multiple modifiers | 1. Set up a battle with test entities <br /> 2. Apply multiple stat modifiers to an entity <br /> 3. Execute an attack with STAB bonus <br /> 4. Force a critical hit <br /> 5. Calculate final damage <br /> 6. Verify all modifiers were properly applied | All modifiers are correctly applied and interact as expected in the damage calculation | N/A | To be tested |
| INT_1223 | Verify that a healing move is properly processed and applied when a character uses it on themselves. | Medium | 1. All related unit tests must have passed (UNT_1121, UNT_1122, UNT_1123, UNT_1142) <br /> 2. Healing system must be implemented <br /> 3. Battle system must support self-targeting moves | 1. Initialize battle with an entity having a healing move <br /> 2. Reduce entity's HP below maximum <br /> 3. Execute the healing move <br /> 4. Verify PP reduction <br /> 5. Confirm HP increase within maximum limits | Healing move correctly restores HP and consumes PP | N/A | To be tested |
| INT_1224 | Verify that turn order and resolution are properly handled based on speed stats and modifiers. | Medium | 1. All related unit tests must have passed (UNT_1131, UNT_1133, UNT_1134, UNT_1135) <br /> 2. Turn system must be implemented <br /> 3. Speed comparison system must be operational | 1. Set up battle with entities having different speeds <br /> 2. Apply speed modifiers to one entity <br /> 3. Initialize turn sequence <br /> 4. Verify turn order determination <br /> 5. Execute multiple turns <br /> 6. Check turn counter updates | Turn order is correctly determined by speed and modifiers, with proper turn progression | N/A | To be tested |

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
| ID | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|-----------|----------------|------------|----------|--------|---------|
| INT_2211 | Verify proper navigation between authentication menu and simulation menu using menu buttons, ensuring correct window transitions and state preservation. | High | 1. All related unit tests must have passed (UNT_2111, UNT_2112) <br /> 2. Authentication and Simulation menus must be implemented <br /> 3. Button navigation system must be operational | 1. Launch authentication menu window <br /> 2. Enter valid login credentials <br /> 3. Click login button to navigate to simulation menu <br /> 4. Verify simulation menu state <br /> 5. Test logout button to return to authentication menu <br /> 6. Verify authentication menu resets properly | Navigation between authentication and simulation menus works correctly with proper state handling | N/A | To be tested |
| INT_2212 | Verify data persistence and state management across different views during navigation. | High | 1. All related unit tests must have passed (UNT_2181, UNT_2182, UNT_3111, UNT_3112) <br /> 2. State management system must be implemented <br /> 3. Data storage system must be operational | 1. Initialize application with test data <br /> 2. Navigate through multiple views <br /> 3. Modify data in different views <br /> 4. Navigate back and forth <br /> 5. Verify data consistency <br /> 6. Test window closure and reopening | Data remains consistent across all view transitions and window states | N/A | To be tested |

#### 2.2.2 UI Component Interaction
| ID | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|-----------|----------------|------------|----------|--------|---------|
| INT_2221 | Verify form submission process including data collection, validation, and backend transmission. | Medium | 1. All related unit tests must have passed (UNT_2141, UNT_2142, UNT_2143) <br /> 2. Form handling system must be implemented <br /> 3. Data validation system must be operational | 1. Initialize form with test fields <br /> 2. Input valid and invalid data <br /> 3. Submit form with invalid data <br /> 4. Verify error handling <br /> 5. Submit form with valid data <br /> 6. Confirm data transmission | Forms properly validate input and handle submission correctly | N/A | To be tested |
| INT_2222 | Verify real-time UI updates in response to user actions and state changes. | Medium | 1. All related unit tests must have passed (UNT_2171, UNT_2172, UNT_2173, UNT_2174) <br /> 2. Event handling system must be implemented <br /> 3. UI update system must be operational | 1. Initialize UI components <br /> 2. Trigger various user actions <br /> 3. Verify immediate UI feedback <br /> 4. Test multiple rapid updates <br /> 5. Check state consistency <br /> 6. Verify all visual indicators | UI components update correctly and immediately in response to actions | N/A | To be tested |

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
| ID     | Description                                       | Priority | Pre-requisites                                                                                                     | Procedure                                                                                                                                                                                                                                  | Expected Result                                                                                                    | Output | Status       |
|--------|---------------------------------------------------|----------|--------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_3111   | Database creation, connection, and verification   | High     | 1. Qt Creator is open with a working project. <br />2. A database management tool (e.g., DB Browser) is installed. | 1. Use the database tool to create a new database file and define a table with multiple fields (e.g., ID, name, score). <br />2. In Qt, create or open a `.ui` file. <br />3. Write code to connect to the newly created database. <br />4. Run the project and verify successful connection by retrieving the database name or table structure. | The application successfully connects to the correct database, which contains the expected table structure.         | N/A    | To be tested |
| UNT_3112   | Read values from a database table                 | High     | 1. Qt project is open with a working database connection. <br />2. The database table contains sample data.        | 1. Create or open a `.ui` file if needed. <br />2. Write and run code to connect to the database. <br />3. Execute SQL queries to fetch values from each field in the table. <br />4. Print or display the fetched data in the application.  | The retrieved values exactly match the contents of the database table.                                              | N/A    | To be tested |
| UNT_3113   | Update values in a database table                 | High     | 1. Qt project is open and connected to a populated database. <br />2. DB Browser is installed and running.         | 1. Open or create a `.ui` file. <br />2. Write code to connect to the database. <br />3. Add functionality to update one or more field values. <br />4. Run the project to perform the update. <br />5. Verify the changes using DB Browser.  | The database values are updated correctly, and changes are visible in DB Browser.                                  | N/A    | To be tested |
| UNT_3114   | Delete values from a database table               | High     | 1. Qt project is open and connected to a populated database. <br />2. DB Browser is installed and running.         | 1. Open or create a `.ui` file. <br />2. Write code to connect to the database. <br />3. Implement functionality to delete records from the table. <br />4. Run the project and execute the deletion. <br />5. Confirm deletion in DB Browser. | Records are successfully deleted from the database and are no longer visible in DB Browser.                        | N/A    | To be tested |


#### 3.1.2 Rules Management
| ID     | Description                                 | Priority | Pre-requisites                                          | Procedure                                                                                                                                                                                        | Expected Result                                                                                 | Output | Status       |
|--------|---------------------------------------------|----------|---------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_3121   | Retrieve rule state                         | High     | 1. Qt unit testing framework is set up                  | 1. Define a mock boolean variable representing a rule (e.g., `bool ruleEnabled = true`). <br />2. Define another variable intended to retrieve that state. <br />3. Use assertions to verify that the retrieved value matches the mock value. | Unit test passes, confirming the rule state is correctly retrieved.                              | N/A    | To be tested |
| UNT_3122   | Detect rule activation and deactivation     | High     | 1. Qt unit testing framework is set up                  | 1. Define a mock boolean variable representing a rule state (e.g., `ruleActive`). <br />2. Write a function to toggle or modify the rule state. <br />3. Use assertions to confirm the state changes as expected (true → false, false → true). | Unit test passes, confirming rule state changes are detected accurately.                        | N/A    | To be tested |
| UNT_3123   | Retrieve multiple rule states as a group    | High     | 1. Qt unit testing framework is set up                  | 1. Define multiple mock boolean variables (e.g., `rule1`, `rule2`, `rule3`). <br />2. Assign known true/false values to each. <br />3. Store the values in a container (e.g., array or vector). <br />4. Use assertions to verify the correct values are retrieved in each index. <br />5. Repeat with different combinations.      | Unit test passes, confirming that sets of rule states are correctly retrieved and interpreted. | N/A    | To be tested |


#### 3.1.3 Characters Management
| ID     | Description                                             | Priority | Pre-requisites                        | Procedure                                                                                                                                                                                                                     | Expected Result                                                                                              | Output | Status       |
|--------|---------------------------------------------------------|----------|---------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_3131   | Retrieve characters and their attributes                | Medium   | 1. Qt unit testing framework is set up | 1. Define 6 mock `Entity` objects with attributes (name, level, type, stats, and 4 mock moves). <br />2. Store all entities in a container (e.g., QVector or QList). <br />3. Select one character and use assertions to verify its data. | Unit test passes, confirming data retrieval for each character is accurate.                                 | N/A    | To be tested |
| UNT_3132   | Detect character selection and deselection              | Medium   | 1. Qt unit testing framework is set up | 1. Define a mock `Entity` object with a `selected` boolean. <br />2. Write a method to toggle this flag. <br />3. Use assertions to confirm state transitions (selected → unselected and vice versa).                        | Unit test passes, confirming toggle functionality works as intended.                                         | N/A    | To be tested |
| UNT_3133   | Retrieve list of exactly two selected characters        | Medium   | 1. Qt unit testing framework is set up | 1. Define 6 mock `Entity` objects. <br />2. Set the `selected` state to `true` for 2 of them. <br />3. Store all in a container. <br />4. Filter and use assertions to confirm exactly 2 are selected.                       | Unit test passes, confirming that only the selected characters are retrieved.                                | N/A    | To be tested |


#### 3.1.4 Template Management
| ID     | Description                                                 | Priority | Pre-requisites                                   | Procedure                                                                                                                                                                                                                                             | Expected Result                                                                                          | Output | Status       |
|--------|-------------------------------------------------------------|----------|--------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_3141   | Create battle template                                      | Low      | 1. Qt test framework is set up <br />2. Template class is implemented | 1. Initialize a `BattleTemplate` object with attributes: <br />• name (string) <br />• array of 6 mock `Entity` objects <br />• array of booleans (rules) <br />• mock damage formula function. <br />2. Use assertions to verify all attributes are correctly set. | Unit test passes, confirming the template initializes correctly with given data.                         | N/A    | To be tested |
| UNT_3142   | Modify battle template settings                             | Low      | 1. Qt test framework is set up <br />2. Existing template instance available | 1. Assign a new name to the template. <br />2. Replace the rule set with a different one. <br />3. Update the mock characters and damage formula. <br />4. Use assertions to confirm updated values.                      | Unit test passes, confirming the template data can be modified and updated successfully.                | N/A    | To be tested |
| UNT_3143   | Delete battle template                                      | Low      | 1. Qt test framework is set up                   | 1. Initialize and store a `BattleTemplate` object in memory or container. <br />2. Remove or deallocate the object. <br />3. Use assertions to ensure the template is no longer accessible.                            | Unit test passes, confirming the template can be successfully deleted.                                  | N/A    | To be tested |
| UNT_3144   | Load existing battle template and retrieve its data         | Low      | 1. Qt test framework is set up <br />2. Template is saved in memory or file | 1. Retrieve a previously stored or serialized template. <br />2. Use assertions to check that all attributes (name, characters, rules, formula) are restored correctly.                                           | Unit test passes, confirming that templates load correctly with all relevant data.                     | N/A    | To be tested |


#### 3.1.5 Damage Calculator Management
| ID       | Description                                           | Priority   | Pre-requisites                                 | Procedure                                                                                                                                                                                                                      | Expected Result                                                                                                     | Output | Status       |
|----------|-------------------------------------------------------|------------|------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------|--------|--------------|
| UNT_3151 | Get Damage Calculator Settings                        | Low        | Qt test framework set up; classes implemented  | 1. Write unit test  <br> 2. Retrieve formula inputs from damage calculator  <br> 3. Use assertions to verify values                                                                     | Unit test passes; retrieved inputs match expected values                                                             | N/A    | To be tested |
| UNT_3152 | Modify Calculator Input Values                        | Low        | Qt test framework set up; classes implemented  | 1. Write unit test  <br> 2. Retrieve calculator inputs  <br> 3. Copy calculator and change input values  <br> 4. Use assertions to check new damage                                     | Unit test passes; modified inputs produce updated output as expected                                                 | N/A    | To be tested |
| UNT_3153 | Modify Calculator Formula                             | Very Low   | Qt test framework set up; classes implemented  | 1. Write unit test  <br> 2. Retrieve original formula  <br> 3. Apply new formula in a test instance  <br> 4. Use assertions to check new damage                                          | Unit test passes; new formula correctly modifies the damage output                                                  | N/A    | To be tested |
| UNT_3154 | Validate formulas and handle input errors gracefully  | Low        | Qt test framework; calculator class available  | 1. Write unit test  <br> 2. Create test cases for invalid syntax (`a + * b`), bad variables (`1abc`), divide by zero, unmatched parentheses, empty input  <br> 3. Test valid edge inputs <br> 4. Fix invalid inputs and re-test     | Invalid inputs show clear error messages; valid inputs are accepted; system recovers after correction; unit test passes | N/A    | To be tested |



### 3.2. Integration Tests

#### 3.2.1 Template & Database Integration
| ID | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|-----------|----------------|------------|----------|--------|---------|
| INT_3211 | Verify template saving and loading operations with database, ensuring data integrity. | Low | 1. All related unit tests must have passed (UNT_3111, UNT_3112, UNT_3113, UNT_3141, UNT_3144) <br /> 2. Database connection must be established <br /> 3. Template system must be operational | 1. Create a new battle template <br /> 2. Save template to database <br /> 3. Verify database entry creation <br /> 4. Load template from database <br /> 5. Compare loaded data with original <br /> 6. Update template and verify changes in database | Templates are correctly saved to and loaded from database with data integrity maintained | N/A | To be tested |
| INT_3212 | Verify rule configuration system properly integrates with template management. | Low | 1. All related unit tests must have passed (UNT_3121, UNT_3122, UNT_3123, UNT_3141) <br /> 2. Rule system must be implemented <br /> 3. Template management system must be operational | 1. Create template with specific rule configuration <br /> 2. Save rule configuration <br /> 3. Modify multiple rules <br /> 4. Update template with new rules <br /> 5. Verify rule persistence | Rule configurations are properly integrated and preserved in templates | N/A | To be tested |
| INT_3213 | Verify calculator error handling and UI error display integration. | Low | 1. All related unit tests must have passed (UNT_2174, UNT_3154) <br /> 2. Calculator error handling must be implemented <br /> 3. UI error display system must be operational | 1. Input invalid formula in calculator <br /> 2. Trigger various error conditions <br /> 3. Verify error message display <br /> 4. Test error state recovery <br /> 5. Confirm UI updates | Calculator errors are properly caught and displayed in UI | N/A | To be tested |

#### 3.2.2 Character & Template Integration
| ID | Description | Priority | Pre-requisites | Procedure | Expected | Output | Status |
|-----|-------------|-----------|----------------|------------|----------|--------|---------|
| INT_3221 | Verify character selection system properly integrates with template management. | Low | 1. All related unit tests must have passed (UNT_3131, UNT_3132, UNT_3133, UNT_3141) <br /> 2. Character selection system must be implemented <br /> 3. Template system must be operational | 1. Display character selection interface <br /> 2. Select two characters <br /> 3. Create template with selections <br /> 4. Save template <br /> 5. Load template and verify characters <br /> 6. Test character deselection | Character selections are properly integrated and preserved in templates | N/A | To be tested |


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
