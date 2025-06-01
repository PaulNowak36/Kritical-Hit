# Test Plan 

| Author | Paul NOWAK |
|--------|------------|
| Created | June 1st 2025 |
| Last Modified | June 1st 2025 |
| Document Deadline | June 9th 2025 |

---

<details>

<summary>📖 Table of content</summary>

- [Introduction](#introduction)
- [1. Objectives](#1-objectives)
- [2. Testing Strategy](#2-testing-strategy)
  - [2-1 Functional Testing](#2-1-functional-testing)
  - [2-2 Performance Testing](#2-2-performance-testing)
  - [2-3 Stress Testing](#2-3-stress-testing)
  - [2-4 Hardware Testing](#2-4-hardware-testing)
  - [2-5 User Interface Testing](#2-5-user-interface-testing)
  - [2-6 Regression Testing](#2-6-regression-testing)
- [3. Features to test](#3-features-to-test)
  - [3-1 Functional Testing](#3-1-functional-testing)
  - [3-2 Performance Testing](#3-2-performance-testing)
  - [3-3 Stress Testing](#3-3-stress-testing)
  - [3-4 Hardware Testing](#3-4-hardware-testing)
  - [3-5 User Interface Testing](#3-5-user-interface-testing)
  - [3-6 Regression Testing](#3-6-regression-testing)
- [4. Features to not test](#4-features-to-not-test)
- [5. Hardware Requirements](#5-hardware-requirements)
- [6. Environment Requirements](#6-environment-requirements)
- [7. Problem Reporting](#7-problem-reporting)
- [8. Risks & Assumptions](#8-risks--assumptions)
- [9. Approvals](#9-approvals)

</details>

---

## 1. Introduction

### 1.1 Document Purpose

This test plan document outlines the testing strategy and methodology for the KriticalHit project, a desktop application for simulating RPG battle systems. The document serves multiple purposes:

- Establish a structured approach to verify that the application meets its defined requirements
- Define testing procedures for both developer testing and external user testing
- Provide a framework for identifying and documenting potential issues
- Ensure the quality and reliability of core features before release

The testing approach will primarily rely on:
- Manual testing by the developer
- Automated unit testing through Qt Creator's framework
- Beta testing phase with external users (post v1.0)
- Performance monitoring through Qt Creator's analysis tools

Success criteria will be measured through:
- Feature functionality verification
- Performance metrics (response times under 100-200ms)
- User satisfaction surveys
- Bug severity assessment

### 1.2 Objectives

#### Version Targets
- Version 1.0 release date: June 9th, 2025
- One primary testing cycle per development phase
- Additional testing following significant feature implementations
- Beta testing phase immediately preceding v1.0 release

#### Core Testing Priorities
1. Battle Simulation System
   - Combat mechanics
   - Turn resolution
   - Win/loss conditions

2. User Interface
   - Menu navigation
   - Visual feedback
   - Response times (≤100ms for interactions)

3. Rules Configuration
   - Database updates
   - Rule application
   - System integration

#### Testing Environment
- Primary development and testing on Qt Creator
- Unit testing through Qt's testing framework
- Performance analysis using Qt's built-in tools
- Manual state monitoring through debug outputs

#### Quality Metrics
Success will be determined by:
- Core features functioning without critical bugs
- UI response times meeting target thresholds
- Positive user feedback during beta testing
- Stable database operations for rule management

Testing will be conducted iteratively, with priority given to critical features essential for the v1.0 release. External testing will be introduced in later versions, incorporating feedback from both technical users (computer science students) and non-technical users (family members) to ensure broad usability.

## 2. Testing Strategy

### 2.1 Functional Testing

#### Unit Testing
Unit tests will focus on core functionality components using Qt's testing framework. Primary test targets include:

1. Battle Mechanics Components:
   - Damage calculation system
     - Base damage computation
     - STAB bonus application
     - Critical hit calculations
   - Turn order determination
   - HP management system

2. Class Functionality:
   - Entity class creation and management
   - Capacity class implementation
   - Battle class operations

3. Rule System:
   - Individual rule activation/deactivation
   - Rule interaction verification
   - Rule persistence testing

4. UI Component Testing:
   - Button functionality
   - Display update mechanisms
   - Battle text generation

#### Integration Testing

Priority will be given to testing critical component interactions:

1. Battle System Integration:
   - Complete attack sequence testing
     - Move selection → damage calculation → HP update
     - Multiple modifier application
     - Move effect processing
   
2. Database Integration:
   - Rule configuration persistence
   - Battle template management
   - Character/move data retrieval
   - Real-time database updates during battles

3. UI-Backend Integration:
   - Menu navigation with state preservation
   - Battle state visualization
   - Real-time data display updates

#### System Testing

Main test scenarios include:

1. Complete Battle Flows:
   - Default configuration battles
   - Custom rule set battles
   - Modified character loadouts
   - Alternative damage calculator implementations

2. Battle Conditions:
   - Pre-scripted AI scenarios for specific testing
   - Various rule combinations
   - Different character configurations

3. Edge Case Testing:
   - Maximum stat values (999)
   - Incomplete movesets (1-3 moves)
   - PP depletion scenarios
   - Multiple rule interactions

### 2.2 Non-Functional Testing

#### Performance Testing
1. Response Time Targets:
   - UI interactions: ≤100ms
   - Database operations: 100-500ms
   - Menu transitions: ≤200ms

2. Load Testing:
   - Multiple battle template management (up to 5)
   - Continuous battle execution
   - Rapid UI interaction sequences

3. Memory Management:
   - Battle system resource monitoring
   - Database operation memory tracking
   - Long-session stability testing

#### Usability Testing

1. Interface Elements:
   - Button responsiveness
   - HP bar visibility and updates
   - Battle text readability
   - Checkbox clarity and function

2. Visual Feedback Criteria:
   - Response timing
   - State change visibility
   - Color scheme consistency
   - Font and image clarity
   - Glitch identification and tracking

#### Compatibility Testing
- Primary: Windows 11 Pro environment
- Future: macOS compatibility assessment
- Display scaling verification (150%)
- Hardware variation testing

### 2.3 Regression Testing

Testing Schedule:
- Major version releases (v1.0, v2.0)
- Feature addition verification
- Bug fix validation

Testing Summary Table:

| Test Batch | Date | Tests Performed | Bugs Found | Tests Completed |
|------------|------|-----------------|------------|-----------------|
| Pre-v1.0   | TBD  | 0              | 0          | 0              |
| Pre-v1.5   | TBD  | 0              | 0          | 0              |
| Pre-v2.0   | TBD  | 0              | 0          | 0              |

Progress Tracking:
- Qt debugger for performance monitoring
- Manual test case logging
- Bug report documentation
- Feature completion verification

## 3. Testing Process

### 3.1 Environment Setup

#### Software Configuration
- Qt Creator 11.0.2 (Community)
- DB Browser for SQLite Version 3.13.1
- Windows 11 Pro (Primary OS)

#### Testing Environment Requirements
1. Debug Mode Configuration:
   - Qt Creator in debug mode
   - Minimal running applications
   - DB Browser for database monitoring

2. Database Management:
   - Dedicated test tables in main database
   - Separate test data sets
   - Database state verification between tests

### 3.2 Test Development Structure

#### Test Organization
1. Source Code Testing:
   - Unit test files
   - Integration test files
   - All tests contained in main code folder

2. Test Documentation:
   - Test case templates
   - Bug report templates
   - External tester instructions

#### Test Prioritization
1. Critical Features (High Priority):
   - Battle system functionality
   - Database operations
   - Core UI components

2. Secondary Features:
   - Enhanced UI elements
   - Optional features
   - Performance optimizations

### 3.3 Test Execution Flow

1. Development Testing Phase:
   - Unit testing after each feature implementation
   - Integration testing for connected components
   - Commit-triggered test execution
   - Pre-release comprehensive testing

2. Testing Schedule:
   - New feature testing: 1-2 hours per feature
   - Release testing: Comprehensive test suite
   - Regular testing during development cycles

### 3.4 External Testing Protocol

#### Tester Management
- Target: 5-10 external testers
- Mix of technical and non-technical users
- Scheduled testing sessions

#### Testing Materials
1. Distribution Package:
   - Executable in ZIP format
   - Installation instructions
   - Testing guidelines

2. Feedback Collection:
   - Google Forms survey
   - Structured questionnaire
   - User experience evaluation

### 3.5 Bug Tracking System

#### Bug Documentation
1. Bug Report Elements:
   - Bug identifier
   - Description
   - Related test case
   - Discovery conditions
   - Discovery date
   - Current status
   - Resolution date
   - Fix methodology

2. Priority Classification:
   - Critical: Affects core functionality
   - High: Impacts main features
   - Medium: Affects secondary features
   - Low: Minor visual/cosmetic issues

#### Bug Resolution Flow
1. Discovery and Documentation
2. Priority Assessment
3. Resolution Planning
4. Fix Implementation
5. Verification Testing
6. Resolution Documentation

### 3.6 Test Execution Checklist

1. Pre-Test Setup:
   - Environment configuration
   - Database preparation
   - Test case documentation ready

2. Testing Sequence:
   - Unit tests execution
   - Integration testing
   - System testing
   - Performance verification
   - External user testing (when applicable)

3. Post-Test Activities:
   - Results documentation
   - Bug reporting
   - Fix prioritization
   - Test report generation

## 4. Main Features to Test

### 4.1 Battle System Configuration

#### Database Operations Testing

1. CRUD Operations Validation
   - Create Operations:
     - Battle Template creation
     - Battle instance creation
   - Read Operations:
     - Battle Template retrieval
     - Entity data access
     - Capacity information
     - Damage Calculator configuration
     - RuleSet verification
   - Update Operations:
     - Battle Template modification
     - Damage Calculator adjustments
     - RuleSet changes
   - Delete Operations:
     - Battle Template removal
     - Battle instance cleanup

2. Character Data Validation
   - Stat Range Verification:
     - HP: 0 to max HP
     - Level: 1 to 100
     - Base Stats: 1 to 999 (Attack, Defense, Speed)
   - Stat Modification Tracking:
     - Buff/Nerf limits (-6 to +6 from base)
     - STAB bonus calculation
   - Move Management:
     - PP tracking per move
     - Move availability verification
   - Display Verification:
     - Character name
     - Current HP
     - Four moves display

3. Rule Configuration Testing
   - Minimum 8 rule combinations
   - Rule interaction verification
   - Rule persistence testing

#### Battle Mechanics Testing

1. Damage Calculation Validation
   Components to test:
   - Attacker Level
   - Attack Stat
   - Move Power
   - Defender's Defense
   - STAB Bonus
   - Critical Hit Bonus

2. Turn Order System
   - Speed-based priority
   - Tie-break random selection (50/50)
   - Turn execution order

3. Win/Loss Conditions
   - HP depletion (0 HP)
   - PP depletion scenario
   - Optional turn limit rule

### 4.2 Simulation Interface

#### Core Functionality Testing

1. Battle Initialization
   - Screen transition (100-200ms)
   - Initial state setup
   - Character display
   - Move selection interface

2. Turn Execution Validation
   - Player move selection
   - AI move selection
   - Action resolution
   - State updates
   - Continuation check

3. HP Management
   - HP bar visual updates
   - Numerical HP display
   - Damage/healing reflection

#### Performance Metrics

1. Response Time Testing
   - Menu transitions: ≤200ms
   - Button interactions: ≤100ms
   - Battle state updates: ≤100ms

2. Resource Management
   - Memory usage monitoring
   - System resource tracking
   - Performance optimization verification

### 4.3 User Interface

#### Navigation Testing

1. Menu Flow Validation
   Primary Transitions:
   - Login ↔ Main Menu
   - Main Template Menu ↔ Simulation Menu
   - Main Template Menu ↔ Rules Menu
   - Main Template Menu ↔ Character Menu
   - Main Template Menu ↔ Damage Calculator
   - Main Menu ↔ Template Gallery
   - Main Menu ↔ New Template Menu
   - Template Gallery ↔ Main Template Menu
   - New Template Menu ↔ Main Template Menu

2. Error Handling
   - Login validation messages
   - Input verification
   - Error message display
   - Error recovery flow

#### Visual Elements Testing

1. UI Component Validation
   - Button scaling verification
   - Menu layout consistency
   - Element positioning
   - Visual hierarchy

2. Display Testing
   - Screen resolution adaptation
   - Element scaling
   - Text readability
   - Interface clarity

## 5. Out of Scope Features

### 5.1 Feature Exclusion Overview

#### Currently Excluded Features
1. General-Purpose 2D Game Simulation
   - Level editor functionality
   - Event management system
   - Multiple gameplay mode support

2. Advanced RPG Systems
   - Real-time battle mechanics
   - Combo attack system
   - Alternative battle styles (Final Fantasy, EarthBound)

3. Complex Customization Tools
   - Stat editor interface
   - Advanced skill creation system
   - Status effect management
   - Equipment and inventory systems

4. Additional Utilities
   - Experience point calculations
   - Battle recording functionality
   - Multi-user account system

#### Exclusion Rationale
- Time constraints for initial development
- Focus on Pokémon-style battle system expertise
- Maintaining clear, manageable project scope
- Prioritizing core battle mechanics quality

### 5.2 Future Implementation Possibilities

#### Planned Future Features (Post v2.5)
1. Battle System Expansions
   - Complete type effectiveness table
   - Enhanced stats management
   - Comprehensive skills system
   - Status effect implementation

2. User Experience Improvements
   - Battle template code export
   - Multi-user support system
   - Enhanced customization options

#### Extensibility Considerations
- Current type system supports future expansion
- Character system allows additional Pokémon
- Move system can accommodate new attacks
- User feedback will guide priority features

### 5.3 Testing Impact Analysis

#### Current Testing Boundaries
1. Scope Limitation Benefits
   - Focused testing approach
   - Concentrated quality assurance
   - Streamlined validation process

2. Feature Dependencies
   - Type table → Current type system
   - Stats menu ↔ Damage calculator
   - Character menu → Multiple feature dependencies
     - Stats system
     - Rules configuration
     - Skills management
     - Status effects

#### Future Testing Considerations
1. Integration Requirements
   - Regression testing for existing features
   - Compatibility verification
   - New feature integration testing

2. Test Case Evolution
   - Current test case adaptation
   - New test case development
   - Integration test expansion

### 5.4 Documentation and Communication

#### Feature Status Communication
1. Update Channels
   - GitHub repository updates
   - Social media announcements
   - Email notifications
   - Documentation updates

2. Bug Report Management
   - Classification of out-of-scope reports
   - Feature request tracking
   - Future implementation consideration

3. Boundary Documentation
   - Functional specification updates
   - Clear feature limitation documentation
   - Future roadmap maintenance

### 5.5 Testing Preparation for Future Features

1. Current System Preparation
   - Modular test structure
   - Extensible test frameworks
   - Clear documentation of test boundaries

2. Future Testing Strategy
   - Test case template preparation
   - Integration test planning
   - Performance benchmark updates

3. Quality Assurance Evolution
   - Test coverage expansion plans
   - Testing tool adaptation strategy
   - Documentation update procedures

## 6. Hardware Requirements
 
### 6.1 Testing Environment Specifications

#### Primary Test Environment
1. Hardware Configuration
   - System: Lenovo Windows 11 Pro (64-bit)
   - CPU: Intel® Core™ i7-1065G7 @ 1.30GHz (up to 1.50 GHz)
   - RAM: 16 GB installed
     - Minimum required: 6 GB
     - Recommended: 8 GB or more
   - Storage: 100-200 MB total space
     - Application binaries
     - Asset files
     - Test data storage

2. Display Requirements
   - Minimum resolution: 1280×720
   - Display scaling: 150% support
   - No dedicated GPU required
   - 2D graphics rendering capability

3. Performance Monitoring Tools
   - Windows Task Manager for CPU/Memory tracking
   - Qt Creator performance analysis tools
   - System resource monitors
   - Display response monitoring

### 6.2 Test Environment Variations

#### Secondary Test Configurations
1. Operating Systems
   - Windows 11 Pro (Primary)
   - Future macOS testing planned
   - Additional Windows versions TBD

2. Display Testing Matrix
   - Multiple screen resolutions
     - Starting from 1280×720
     - Various aspect ratios
   - Different laptop display sizes
   - Scaling configurations

### 6.3 Input Device Testing

#### Required Input Devices
1. Mouse/Touchpad Requirements
   - Basic functionality testing
   - UI element interaction verification
   - Cursor response validation
   - Click recognition testing

2. Keyboard Testing Requirements
   - Character input validation (login)
   - Special key functionality
     - Arrow keys
     - Space bar
     - Escape key
   - Input response verification

#### Out of Scope Input Testing
- Touchscreen functionality
- Alternative input methods
- Specialized gaming peripherals

### 6.4 Performance Testing Tools

#### Resource Monitoring
1. CPU Usage Tracking
   - Windows Task Manager
   - Qt Creator profiling tools
   - Performance baseline establishment
   - Usage pattern analysis

2. Memory Management
   - RAM usage monitoring
   - Memory leak detection
   - Resource allocation tracking
   - Peak usage measurement

3. Display Performance
   - UI responsiveness testing
   - Frame rate monitoring
   - Screen scaling verification
   - Visual clarity assessment

### 6.5 Testing Metrics

#### Performance Benchmarks
1. Response Times
   - UI interaction: ≤100ms
   - Menu transitions: ≤200ms
   - Battle system updates: real-time

2. Resource Usage Limits
   - RAM: 6 GB minimum
   - Storage: 200 MB maximum
   - CPU: Baseline measurements TBD

3. Display Requirements
   - Minimum resolution support
   - Scaling functionality
   - Visual element clarity
   - UI consistency across configurations

## 7. Environment Requirements
<!-- Consider adding:
- Version control procedures
- Build automation setup
- Test data management
- Environment restoration procedures -->

### 7.1 Development Tools
- Qt Creator (latest stable version)
- Visual Studio Code
- GitHub Desktop
- SQLite Browser

### 7.2 Testing Tools
- Qt Test framework
- Database testing tools
- Performance monitoring utilities
- Screen recording software for usability tests

## 8. External User Testing
<!-- Consider adding:
- Participant selection criteria
- Test session duration
- Data collection methods
- Privacy considerations -->

### 8.1 Test Environment Setup
- Quiet, controlled room
- Standard desk setup
- Proper lighting
- Recording equipment (if needed)

### 8.2 Testing Protocol
1. Environment preparation
2. User briefing
3. Task execution
4. Feedback collection
5. Data analysis

## 9. Problem Reporting
<!-- Consider adding:
- Bug severity classification
- Response time requirements
- Escalation procedures
- Documentation templates -->

### 9.1 Bug Reporting Process
1. Issue examination and classification
2. Condition documentation
3. Impact assessment
4. Resolution planning
5. Fix implementation and verification

### 9.2 Documentation Requirements
- Steps to reproduce
- Expected vs actual behavior
- Environment details
- Screenshots/recordings
- Severity level

## 10. Risks and Assumptions

### 10.1 Risk Matrix

| Risk | Impact | Mitigation Strategy |
|------|---------|-------------------|
| Limited testing time | High | Prioritize critical features |
| Performance issues | Medium | Optimize code and assets |
| Simulation crashes | High | Implement robust error handling |
| UI rendering issues | Medium | Simplify complex elements |
| Database integration | Medium | Implement efficient queries |

### 10.2 Assumptions
- Development environment stability
- Resource availability
- Team expertise
- Timeline feasibility