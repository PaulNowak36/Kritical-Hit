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
<!-- Consider adding:
- Specific test scenarios for battle mechanics
- Database CRUD operation tests
- UI component validation tests
- Test coverage targets -->

#### Unit Testing
Individual units/parts of the software are tested separately from the rest of the systems. They can focus on a specific function, method, class, or a module. Automated.

#### Integration Testing
Different parts/modules of the app are tested together. Identify issues that are caused when coupling multiple components together, and ensure the system work as a whole.

#### System Testing
Ensure the entire app work as a whole + meets functional and non-functional requirements. Test the app in various scenarios and under various conditions, including normal and abnormal usage, making sure it handle different situations correctly.

#### Acceptance Testing
Check if app meets acceptance criteria and is ready for development. Tested by other users before version release.

### 2.2 Non-Functional Testing
<!-- Consider adding:
- Specific performance benchmarks from functional specs (e.g., UI response under 100ms)
- Load testing for database operations
- Memory usage monitoring during battle simulations
- Screen resolution and scaling tests (150% display scaling) -->

#### Performance Testing
- Assess performance and response time under different workloads
- Test scenarios:
  - Multiple battle templates loaded
  - Rapid UI interactions
  - Continuous battle simulations
  - Database operations under load

#### Usability Testing
- Evaluate User Interface and User Experience
- Focus areas:
  - Menu navigation flow
  - Battle interface clarity
  - Rule configuration accessibility
  - Visual feedback effectiveness

#### Compatibility Testing
- Windows 11 Pro (primary platform)
- macOS compatibility testing
- Display scaling variations
- Different hardware configurations

### 2.3 Regression Testing
<!-- Consider adding:
- Automated test suite configuration
- Critical path testing scenarios
- Version control integration
- Release testing checklist -->

Testing Summary Table:

| Test Batch | Date | Tests Performed | Bugs Found | Tests Completed |
|------------|------|-----------------|------------|-----------------|
| Initial    | TBD  | 0              | 0          | 0              |
| Pre-v1.0   | TBD  | 0              | 0          | 0              |
| Pre-v2.0   | TBD  | 0              | 0          | 0              |

## 3. Testing Process
<!-- Consider adding:
- Test environment setup procedures
- Continuous Integration workflow
- Bug tracking system details
- Test documentation templates -->

### 3.1 Test Development
- Writing unit tests for core battle mechanics
- Integration tests for database operations
- System test scenarios for complete battle flows
- Usability test scripts for external testers

### 3.2 Test Execution Flow
1. Automated unit testing
2. Integration testing of connected components
3. System testing of complete features
4. Performance benchmarking
5. Cross-platform compatibility verification
6. External user testing
7. Regression testing before release

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