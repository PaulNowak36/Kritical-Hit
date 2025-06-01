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
<!-- Consider adding:
- Database operation test cases
- Template management scenarios
- Rule configuration validation
- Character stat verification -->

#### Database Operations
- Template CRUD operations
- Character data management
- Move set configurations
- Rule set persistence

#### Battle Mechanics
- Turn resolution
- Damage calculation
- Status effect application
- Win/loss condition validation

### 4.2 Simulation Interface
<!-- Consider adding:
- Real-time update verification
- Animation timing tests
- Battle log accuracy
- Error handling scenarios -->

#### Core Functionality
- Battle initialization
- Turn execution
- Move selection and validation
- HP bar updates
- Battle conclusion handling

#### Performance Metrics
- Interface response times
- Animation smoothness
- Resource utilization
- Memory management

### 4.3 User Interface
<!-- Consider adding:
- Accessibility testing criteria
- Input validation scenarios
- Error message verification
- Visual consistency checks -->

#### Navigation Testing
- Menu transitions
- Button functionality
- Screen flow validation
- Error handling

#### Visual Elements
- UI scaling
- Element alignment
- Color scheme consistency
- Animation effects

## 5. Out of Scope Features
<!-- Consider adding:
- Rationale for exclusion
- Future implementation possibilities
- Impact on current testing scope -->

- Account creation and security
- Alternative RPG battle systems
- Tutorial system
- Advanced skill management
- Status effect system

## 6. Hardware Requirements
<!-- Consider adding:
- Detailed hardware specifications for test environments
- Performance monitoring tools
- Storage requirements for test data
- Network configuration needs -->

### 6.1 Primary Test Environment
- Lenovo Windows 11 Pro
  - CPU: Intel® Core™ i7-1065G7 @ 1.30GHz
  - RAM: 16 GB
  - Display: 150% scaling support
  - Storage: Minimum 200MB free space

### 6.2 Secondary Test Environments
- macOS system (specifications TBD)
- Alternative Windows configurations
- Various screen resolutions

### 6.3 Input Devices
- Mouse required
- Keyboard for development testing
- No touchscreen support required

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