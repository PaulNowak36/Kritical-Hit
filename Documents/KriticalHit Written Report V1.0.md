# Moonshot Project: Kritical Hit Written Report V1.0

| Author        | Paul NOWAK |
|---------------|------------ |
| Created       | June 9th 2025  |
| Last Modified | June 9th 2025  |
| Document Deadline | June 9th 2025 |

## Table of contents

<details open>

- [1. Introduction](#1-introduction)
   - [1.1. Document Purpose](#11-document-purpose)
   - [1.2. Overview](#12-overview)
- [2. Monthly Progress Reports](#2-monthly-progress-reports)
   - [2.1. 2023](#2023)
   - [2.2. 2024](#2024)
   - [2.3. 2025](#2025)
   - [2.4. Final Review](#final-review)
- [3. Functional Specifications](#3-functional-specifications)
   - [3.1. Overview](#31-overview)
      - [3.1.1. Document Purpose](#311-document-purpose)
      - [3.1.2. Context](#312-context)
      - [3.1.3. RPG Domain](#313-rpg-domain)
   - [3.2. Product Goal](#32-product-goal)
      - [3.2.1. Project Scope](#321-project-scope)
      - [3.2.2. Constraints](#322-constraints)
      - [3.2.3. Risks and Assumptions](#323-risks-and-assumptions)
   - [3.3. User Personas](#33-user-personas)
      - [3.3.1. Henri Hollais](#331-henri-hollais)
      - [3.3.2. Violet Hitgoh](#332-violet-hitgoh)
      - [3.3.3. Arun Reddy](#333-arun-reddy)
      - [3.3.4. Luke Atmadohg](#334-luke-atmadohg)
      - [3.3.5. Katrina Ladalh](#335-katrina-ladalh)
   - [3.4. List of Features](#34-list-of-features)
      - [3.4.1. User-Friendly Application](#341-user-friendly-application)
      - [3.4.2. Battle Interface and Flow Simulation](#342-battle-interface-and-flow-simulation)
      - [3.4.3. Battle Mechanics System](#343-battle-mechanics-system)
      - [3.4.4. Set Up Battle](#344-set-up-battle)
   - [3.5. Product Details](#35-product-details)
      - [3.5.1. Minimum Viable Product](#351-minimum-viable-product)
      - [3.5.2. Non-Functional Requirements](#352-non-functional-requirements)
      - [3.5.3. Acceptance Criteria](#353-acceptance-criteria)
      - [3.5.4. Out of Scope](#354-out-of-scope)
   - [3.6. Technical Stack & Requirements](#36-technical-stack--requirements)
      - [3.6.1. Development Environment](#361-development-environment)
      - [3.6.2. Database Overview](#362-database-overview)
      - [3.6.3. System Requirements](#363-system-requirements)
   - [3.7. Testing Strategy Overview](#37-testing-strategy-overview)
      - [3.7.1. Testing Objectives](#371-testing-objectives)
      - [3.7.2. Testing Scope](#372-testing-scope)
   - [3.8. User Interface & User Experience](#38-user-interface--user-experience)
      - [3.8.1. Importance](#381-importance)
      - [3.8.2. User Flowchart](#382-user-flowchart)
      - [3.8.3. UI Elements](#383-ui-elements)
      - [3.8.4. Accessibility and Responsiveness](#384-accessibility-and-responsiveness)
      - [3.8.5. Visual Feedback and Error Handling](#385-visual-feedback-and-error-handling)
   - [3.9. Glossary](#39-glossary)
      - [3.9.1. RPG Lexical Field](#391-rpg-lexical-field)
      - [3.9.2. Miscallenous](#392-miscallenous)
- [4. Technical Specifications](#4-technical-specifications)
   - [4.1. Overview](#41-overview)
      - [4.1.1. Document Purpose](#411-document-purpose)
      - [4.1.2. Project Presentation](#412-project-presentation)
      - [4.1.3. System Overview](#413-system-overview)
   - [4.2. System Architecture](#42-system-architecture)
      - [4.2.1. App Architecture](#421-app-architecture)
      - [4.2.2. Modules and Components](#422-modules-and-components)
      - [4.2.3. Other External IT Tools](#423-other-external-it-tools)
   - [4.3. Technologies Used](#43-technologies-used)
      - [4.3.1. Front End](#431-front-end)
      - [4.3.2. Database Specifications](#432-database-specifications)
      - [4.3.3. Technical Constraints and Limitations](#433-technical-constraints-and-limitations)
      - [4.3.4. Non-Functional Requirements - Technical Implementation Details](#434-non-functional-requirements---technical-implementation-details)
   - [4.4. Application Features](#44-application-features)
      - [4.4.1. Battle System Rules](#441-battle-system-rules)
      - [4.4.2. Battle Simulation Core](#442-battle-simulation-core)
      - [4.4.3. Main Battle Functions](#443-main-battle-functions)
      - [4.4.4. Rules Implementation](#444-rules-implementation)
      - [4.4.5. Characters Implementation](#445-characters-implementation)
      - [4.4.6. Capacities Implementation](#446-capacities-implementation)
      - [4.4.7. Setting Up Battle](#447-setting-up-battle)
      - [4.4.8. Future Features](#448-future-features)
   - [4.5. Product Deployment](#45-product-deployment)
      - [4.5.1. Deployment Environment](#451-deployment-environment)
      - [4.5.2. Release Schedule](#452-release-schedule)
- [5. Test Plan](#5-test-plan)
   - [5.1. Introduction](#51-introduction)
      - [5.1.1. Document Purpose](#511-document-purpose)
      - [5.1.2. Objectives](#512-objectives)
   - [5.2. Testing Strategy](#52-testing-strategy)
      - [5.2.1. Functional Testing](#521-functional-testing)
      - [5.2.2. Non-Functional Testing](#522-non-functional-testing)
      - [5.2.3. Regression Testing](#523-regression-testing)
   - [5.3. Testing Process](#53-testing-process)
      - [5.3.1. Environment Setup](#531-environment-setup)
      - [5.3.2. Test Development Structure](#532-test-development-structure)
      - [5.3.3. Test Execution Flow](#533-test-execution-flow)
      - [5.3.4. External Testing Protocol](#534-external-testing-protocol)
      - [5.3.5. Bug Tracking System](#535-bug-tracking-system)
      - [5.3.6. Test Execution Checklist](#536-test-execution-checklist)
   - [5.4. Main Features to Test](#54-main-features-to-test)
      - [5.4.1. Battle System Configuration](#541-battle-system-configuration)
      - [5.4.2. Simulation Interface](#542-simulation-interface)
      - [5.4.3. User Interface](#543-user-interface)
   - [5.5. Out of Scope Features](#55-out-of-scope-features)
      - [5.5.1. Feature Exclusion Overview](#551-feature-exclusion-overview)
      - [5.5.2. Future Implementation Possibilities](#552-future-implementation-possibilities)
      - [5.5.3. Testing Impact Analysis](#553-testing-impact-analysis)
      - [5.5.4. Documentation and Communication](#554-documentation-and-communication)
      - [5.5.5. Testing Preparation for Future Features](#555-testing-preparation-for-future-features)
   - [5.6. Hardware Requirements](#56-hardware-requirements)
      - [5.6.1. Testing Environment Specifications](#561-testing-environment-specifications)
      - [5.6.2. Test Environment Variations](#562-test-environment-variations)
      - [5.6.3. Input Device Testing](#563-input-device-testing)
      - [5.6.4. Performance Testing Tools](#564-performance-testing-tools)
      - [5.6.5. Testing Metrics](#565-testing-metrics)
   - [5.7. Environment Requirements](#57-environment-requirements)
      - [5.7.1. Development Environment Setup](#571-development-environment-setup)
      - [5.7.2. Testing Framework Configuration](#572-testing-framework-configuration)
      - [5.7.3. Version Control Strategy](#573-version-control-strategy)
      - [5.7.4. Test Environment Management](#574-test-environment-management)
      - [5.7.5. Quality Assurance Procedures](#575-quality-assurance-procedures)
   - [5.8. External User Testing](#58-external-user-testing)
      - [5.8.1. Participant Selection](#581-participant-selection)
      - [5.8.2. Test Environment Setup](#582-test-environment-setup)
      - [5.8.3. Testing Protocol](#583-testing-protocol)
      - [5.8.4. Data Collection and Analysis](#584-data-collection-and-analysis)
      - [5.8.5. Testing Management](#585-testing-management)
   - [5.9. Problem Reporting](#59-problem-reporting)
      - [5.9.1. Bug Classification System](#591-bug-classification-system)
      - [5.9.2. Documentation Process](#592-documentation-process)
   - [5.10. Risks and Assumptions](#510-risks-and-assumptions)
      - [5.10.1. Testing Risk Matrix](#5101-testing-risk-matrix)
      - [5.10.2. Testing Assumptions](#5102-testing-assumptions)
- [6. Test Cases](#6-test-cases)
   - [6.1. Battle Simulation](#61-battle-simulation)
      - [6.1.1. Unit Tests](#611-unit-tests)
      - [6.1.2. Integration Tests](#612-integration-tests)
      - [6.1.3. System Tests](#613-system-tests)
      - [6.1.4. Performance Tests](#614-performance-tests)
   - [6.2. Interface](#62-interface)
      - [6.2.1. Unit Tests](#621-unit-tests)
      - [6.2.2. Integration Tests](#622-integration-tests)
      - [6.2.3. System Tests](#623-system-tests)
      - [6.2.4. Performance Tests](#624-performance-tests)
   - [6.3. Template Configuration](#63-template-configuration)
      - [6.3.1. Unit Tests](#631-unit-tests)
      - [6.3.2. Integration Tests](#632-integration-tests)
      - [6.3.3. System Tests](#633-system-tests)
      - [6.3.4. Performance Tests](#634-performance-tests)
- [7. Bug Tracking](#7-bug-tracking)
   - [7.1. Bug Template](#71-bug-template)
   - [7.2. Unit Testing Bugs](#72-unit-testing-bugs)
   - [7.3. Interface Testing Bugs](#73-interface-testing-bugs)
   - [7.4. System Testing Bugs](#74-system-testing-bugs)
   - [7.5. Performance Testing Bugs](#75-performance-testing-bugs)
- [8. Glossary](#8-glossary)
   - [8.1. RPG Lexical Field](#81-rpg-lexical-field)
   - [8.2. Miscallenous](#82-miscallenous)

</details>

## 2. Monthly Progress Reports

### 2.1 2023

#### February 2023  

In December 2022, my Moonshot project named **KriticalHit** was validated by the Algosup team, who gave me the green light to start working on it.  

At the beginning of the year 2023, I started writing weekly reports about my activities on my computer. These are document summaries of my accomplishments, problems, observations, and goals that I need to achieve. I try to update them each day, if I manage to find time to work on the development of KriticalHit.  

Indeed, I wanted to leave a trace of any kind of work I was doing, in case I need to check older files for future work.  

Currently, I’m in the **pre-production phase** of KriticalHit, which means I am focusing on the planning and research aspects of the project.  

For now, I’m still trying to figure out how I will organize myself (tools to use, main tasks to accomplish) while researching valuable information related to my work. To have a good start, I need to clearly define the rules for how my product will work, so I can begin working on the functional and technical specifications.  

Now, I’m planning to use a **project management software** to organize all the data, tasks, documents, and progress of my work. I’ve done some research on the best options, and I’m currently hesitating between **Trello** and **Wrike**.  

Meanwhile, I’ve started researching **game engines** in general, such as **GameMaker** (a 2D game engine), to get an idea of how I could build my software.  

François Gutherz from **Harfang3D** gave me advice about how they developed Harfang3D, so I now have several leads on how I could design my own game engine.  

Finally, after gathering everything I need to manage my project and conducting my initial research, I will begin studying in more depth how to build KriticalHit and make a final decision:  

> **Will I build this software from scratch, or base it on an existing one?**  

#### March 2023 

I pursued my research about different game engines, like **Construct** or **GameMaker**, to get an idea of how my software would look like.  

Indeed, I’ve spoken to **Konstantinos Dimopoulos**, my Game Design teacher, about my project. I wanted to ask him for advice on how to make my engine as interactive and user-friendly as possible. While proposing some applications, he told me that he will contact me again if he finds any interesting **UI mock-up providers**.  

Then, a comrade advised me to use [**ClickUp**](https://clickup.com/) as a project management tool. So, I created a project for **Kritical Hit** where I’ve listed all my tasks, sorted them into different domains (**Planning**, **Research**, **Design**, **Development**, **Testing**, and **Deployment & Maintenance**) and by importance.  

### ClickUp Organization  

I also created a **Gantt diagram** to visualize my tasks and tried to plan how much time I would require to solve each of them. This view is very likely to change in the next weeks.  

After creating document templates for project management (continuous improvement and brainstorming subjects), I also started to follow a **C++ tutorial course** on YouTube by “**The Cherno**.”  

Finally, as I was still trying to figure out how to build my software (from scratch or based on another engine), after much research, I realized I would need to **list all the features** I want for my software. That way, I can decide what my engine will need and what it won’t need.  

So, I’ve created an **Excel Spreadsheet** to list all the features I would need, rank how important they are, and break them down into smaller tasks as much as possible.  

It would include things like:  
- *Will the main menu have a LEAVE button?*  
- *Will there be a confirmation window displayed when we click it?*  
- *What about the “save template” button? Will it have no confirmation window?*  

As many possibilities could be addressed, this spreadsheet will help me write my **functional specifications**. Once I decide everything I need, I’ll have a clearer view of what kind of engine I must build.

#### April 2023  

This month, I managed to complete my **Features List** for my **KriticalHit** project. Indeed, it contains details about each feature’s description, process, degree of importance, and requirements.  

[**KriticalHit Features list.xlsx**](#)  

In the process, **Konstantinos Dimopoulos** advised me not to detail the features too much and to focus more on the **core aspects**. Now, I need to validate them and decide which ones I will implement based on their importance.  

I managed to define the **milestones** to accomplish my project:

- Project Scope decided  
- UI Prototype finished  
- Software Development started  
- Quality Assurance Testing  
- User Acceptance Testing  
- Project Delivery  

Although I seem to have completed my task list, I still need to confirm the **time required** for each of them, as I struggle to make accurate estimations.  

In fact, I believe I should inquire more about the **average time required** for similar objectives and milestones.  

By the way, **Konstantinos Dimopoulos** suggested I use [**Figma**](https://www.figma.com/) as a prototype design tool. For that, I just need to watch some tutorials about it and explore the kinds of **UI mock-ups** I could create.


#### May 2023  

First, I finally finished detailing my **Features List** for **KriticalHit**. I also selected the ones I want to implement based on their **importance** and for **time management** purposes.

Then, I continued to look for a tool to help me create an interface and learned that **design-first prototype UIs** could cause backtracking issues. So, I decided to search for a tool to make a **code-based prototype** instead.

I found **UXPin**, a wonderful prototyping tool that includes built-in UI elements to help create an interface with a **code-based approach**.

Indeed, it’s possible to **export the prototype in full HTML**, but it isn’t integrated with the C++ language yet.

However, I discovered the possibility of using a **C++ web framework** that handles HTML elements, and I found [**Wt**](https://www.webtoolkit.eu/wt):

> Wt is a C++ library for creating web applications using HTML elements, and I would be interested in using it.

By the way, I decided to make **Kritical Hit** a **Desktop Application**, written in **C++**, built with **dynamic libraries** for performance, and using an **HTML interface**.

At the end of the month, I was finally able to **reorganize my tasks** and estimate how much time they would require. Of course, there’s no guarantee that the schedule will be 100% followed, but I’ll try my best to stick to it.

Indeed, it’s likely that I’ll **update it regularly** in the next few months.

#### June 2023  

At the start of the month, I created an account to test **UXPin**’s features through a **one-month free trial**.

I created a **test prototype** where I experimented with different symbols (circles, textboxes, etc.) and tried various interactions, such as:

- Moving an icon from one place to another by clicking on it  
- Changing an icon’s color while hovering the mouse  

Furthermore, UXPin allows you to add **states** to elements to create more unique interactions. I was able to create a **hidden menu** that scrolls in from the left when clicking on an icon.

---

To get more information about the **Wt framework**, I had a phone call with a manager named **Wim Dumon**. I initially intended to use Wt to create a **C++ desktop application** for better performance.

However, he explained that Wt is more focused on **web applications**, and advised me to use the **Qt framework**, which is more suitable for **desktop applications**.

---

Then, I did some research on a framework called **ORK**, which helps with creating **RPG games** in Unity.

I discovered that there are several types of **RPG battle systems**, and I should choose the ones most suitable for implementation in **KriticalHit**.

Indeed, I plan to **study ORK’s source code** so I can understand its architecture and potentially reuse parts of it in my own software.

---

Finally, I started drawing various **concept arts** for my application.

#### July 2023  


First of all, I started to research the **Qt Framework**: it’s a cross-platform software development framework that contains a comprehensive set of highly intuitive and modularized C++ library classes.

Indeed, it produces highly readable, easily maintainable, and reusable code with high runtime performance and a small footprint.

However, the full software is very expensive, and the free trial is only for 10 days. Although there is a free open-source version for smaller projects, I have yet to determine if it’s sufficient for my Moonshot project.

I found a tutorial on YouTube (created by Sciber) that allows us to create a small project with Qt. I tried to follow it, but I only managed to download a version of Qt used for designing and not for creating.

So, I sent a message to Sciber, who promised to help solve the issue for me.

Meanwhile, I’ve also decided to research **WebView2**: it’s a free service created by Microsoft Edge that allows us to embed web technologies (HTML, etc.) in a native C++ app.

I created a post on a Microsoft forum where I received a tutorial and a sample project to learn how to use WebView2. Then, I cloned the project from a GitHub repository and started following the tutorial.

Perhaps learning more about C++ again would help me continue this tutorial.

Finally, I continued to draw my concept arts for **Kritical Hit**. I also plan to detail more about what each feature can do.

#### August 2023  
 
This month, I tried to inquire more about **WebView2** and **Qt**.

First, I followed a tutorial for WebView2 which allowed me to open a window using Microsoft Edge.

I also discovered another tutorial showing how to embed web content into a native application. Indeed, it contains some use cases highlighting communication in WebView2, like sending messages from the host app to WebView2, for example.

Some lines of code from certain files use web code, but I have yet to manage modifying it so the HTML code can be changed during debugging.

Then, I’m still searching for **Qt Creator**, and I also created a post on the Qt forum for help.

As I’m still training in C++, I plan to create a simple text-based RPG program for practice, but also potentially to test possibilities for my app’s features.

Finally, I’ve been detailing sub-features for my app in my personal notes, and I plan to start writing my functional and/or technical specifications.

#### September 2023  



To begin with, I finally managed to try the Qt tutorial I found by reinstalling the application again. Indeed, I was able to create a small application with a simple calculator.

Then, I managed to contact M. Gutherz, my current computer science teacher, who is familiar with the Qt framework. I emphasized that I was looking for a GUI with good interactivity, so he advised me about **QML**, a GUI framework for Qt that offers a good trade-off.

Finally, I decided to ask Markus Adams, a teacher specialized in project management, to better estimate the time required for each of my tasks.


#### October & November 2023  


I figured out that I often underestimate the time required for my tasks in my Gantt chart, which can be found on my ClickUp account. Thanks to Markus Adams’ advice, a teacher specializing in project management, I decided to reorganize my tasks.

So, I decided to work on a project charter where I reworked my task list and estimated the time required for each.

Among the new objectives, I plan to make a roadmap on how to build my software step by step and gather all the information I need for writing my functional requirements.

Although, I still plan to run tests using the Qt framework and try creating software with a user-friendly interface.


#### December 2023 & January 2024 

I decided to start a new list of tasks for my Moonshot project. In fact, it contains more details about existing tasks, such as subtasks and dependencies, and they are organized into 10 phases: Planning/Initiation, User Research, Technical Requirements, Interface Design, Battle System Mechanics, Programming Setup, Code Creation, Docs and Tutorials, Testing & Q.A., and Software Launch.

[ClickUp Project Link](https://app.clickup.com/9003082302/v/g/8ca08hy-582)  Note: This link is now outdated.

Furthermore, I created a new Gantt diagram to schedule the tasks and estimate how much time they would require. I also plan to check their progress each week and verify if the deadlines are being met.

To finish the month of January, I have to start writing a new project charter (in a README file), set the milestones and KPIs, and also decide on the MVP (Minimum Viable Product).

#### Year-End Review
The first year was primarily focused on project planning, research, and foundational work:

**Key Achievements**:

- Project validation by ALGOSUP in December 2022
- Established project management system using ClickUp
- Completed initial features list and research on game engines
- Made key technology decisions (C++, Qt Framework)
- Created first concept arts
- Started learning required technical skills (C++, Qt)

**Main Challenges**:
- Difficulty estimating task durations accurately
- Uncertainty about whether to build from scratch or use existing engine
- Technical tool selection process took longer than expected
- Frequent schedule reorganization needed

**Overall Status**: The project remained in pre-production phase throughout 2023, with focus on planning and research rather than implementation. While this meant slower visible progress, it established important foundations.

### 2.2 2024 

#### February 2024  

This month, I managed to finish all the tasks required to achieve Phase 2: User Research. In fact, I mostly worked on setting up everything needed for the creation of the functional specifications.

For example, I defined a rough plan to make it, identified the targeted audience and market, and created several user personas.

Although I made some progress, I still have trouble finishing my tasks on time.

Indeed, I need to complete Phase 1 by starting to write the functional specifications. I must also decide on some technical details, start working on the UI, and imagine different scenarios for RPG battles.

#### March 2024  

I started to write the functional specifications for my Kritical Hit project.

As a help, I created a navigation roadmap for preparing the UI concept arts, conceived different battle test scenarios to decide the RPG features to implement, and started some research to prepare the technical specifications.

However, I had to delay many of my tasks and reorganize my task schedule because the number of tasks per week was too high. In fact, I believe I will need more time to achieve my Moonshot project.

I plan to complete the functional specifications this month and to monitor my progress on a weekly basis.

#### April & May 2024  

I’m still in the process of writing the functional specifications, as I need to carefully apply the MoSCoW matrix to the complete list of features.

I had to reorganize my schedule again, but I expect to finish the Functional Specifications in June.

Even though I believe my project will be done in C++, I plan to do some research to see if it could also be done in C#. If so, I might need another framework other than Qt.

Now, I have decided to create concept arts on Figma, working on the login and menu screens.


#### June 2024 & July 2024 & August 2024  

During my vacation, I had to modify the summary of the functional specifications document. I decided to provide more details about the UI interaction, which will be crucial for this project.

To complete that section, I continued working on the concept art, including the Battle template screen, which will be the core of the software.

Additionally, I finally completed the MoSCoW matrix. My plan is to reorganize my schedule based on the importance of the features.

There are five types of features that must be implemented:

- Template Creation  
- Character Creation  
- Stats Creation  
- Skills Creation  
- Status Creation  

Lastly, I created a Minimum Viable Product (MVP) of the app, where the first version contains only the app skeleton and the Template Creation menu.


#### September 2024  

Recently, I presented the progress of my current Moonshot Project to some of my comrades. Indeed, I mentioned that I might need another framework other than Qt if I plan to build the app using C# instead of C++.

Some of them found my project too ambitious, especially since I have never developed new software by myself, and advised me to make it an extension of a game engine like Unity instead.

Furthermore, they insisted that I should finish the specification documents and start coding as soon as possible, using the Agile methodology for better organization.

Finally, they proposed setting up a meeting with Franck, as I need to review the target problem of my Moonshot Project.


#### October 2024

Finally, I started the creation of a prototype for Kritical Hit, focused on giving a preview of the targeted User Interface.

Indeed, it’s based on Phase 1 of my Minimum Viable Product, including the navigation within the app and the template menu, and it contains the very first code files of my Moonshot project, placed within a new branch named “Prototype”.

Although it’s not ready to be tested yet after a total of 6 hours spent working on the prototype this month, I believe I will be able to finish it this November.

**SPRINT:** Honestly, I believe I didn’t spend enough time on my prototype, which resulted in some misunderstanding of several Qt tools.

Even if I’m mostly satisfied with several of the framework’s features to make my UI, I haven’t followed any complete tutorial videos because I have yet to test the various features I need.

Additionally, some of my tasks related to the technical specifications documents are overdue.

So, I need to update my ClickUp document, following only the order of tasks to be completed.


#### November 2024  

So far, I was able to build my first prototype and have a few people review it. The feedback I received often mentioned the overuse of colors and the lack of modernity in the design.

However, I found out that my prototype only showed a single feature, which simply introduced how my app’s interface worked, and never revealed the true potential of Kritical Hit.

Indeed, I need to build a new prototype showcasing the expected features, such as the simulation menu and the rules menu. I will use most of the criticism I gathered when testing my first prototype to build the new one.

However, I will have to complete this before the official 0.1 version of Kritical Hit, which will contain a cleaner version of the interface.

**SPRINT:** Although I managed to build my first prototype, I didn’t complete any official version on time. Furthermore, I haven’t started writing my Technical Specifications yet.

Another problem: some reviewers took too much time to provide feedback, and I lost time waiting before starting work on the next prototype.

What I need to change is to find a better way to select future testers, such as asking them in advance, and to move forward to the next update of Kritical Hit while the current version is still being tested.

Additionally, I need to conduct some technical research about potential Qt resources to help me build my app and gather knowledge for my Technical Specifications.


#### December 2024

I started working both on the 0.1 version of Kritical Hit and on writing my technical specifications.

Thanks to various tutorials and research, I was able to start getting used to using Qt Creator, but I still have a lot to learn.

I managed to integrate the login system for accessing the main menu, and I built my first two pages while trying to address the criticism from my first prototype.

Furthermore, I started writing my technical specifications by planning and gathering information about the potential Qt Creator modules required for our project.

**SPRINT:** My progress is slow, and I need to work more regularly.

Indeed, I believe I didn’t focus enough on the technical specifications while working on the unfinished version 0.1.

Next time, I need to balance my Moonshot Project working time between coding and writing documentation, as I haven’t even started my test plan yet.

In the end, I might need a mentor for my Moonshot project to provide advice both on my organization and my decisions.

### Year-End Review

The second year saw transition from planning to initial implementation:

**Key Achievements**:
- Completed user research phase
- Created functional specifications
- Developed first UI prototype
- Started actual coding with Qt Creator
- Refined project scope (focusing on Pokémon-style battles)
- Established MVP requirements
- Began technical specifications

**Main Challenges**:
- Continued issues with time management
- Project scope proved too ambitious initially
- Documentation fell behind implementation
- Prototype feedback highlighted need for design improvements
- Difficulty balancing coding vs documentation work

**Overall Status**: 2024 marked important transition from planning to implementation, though progress was slower than hoped. The project scope was successfully narrowed to something more achievable.

### 2.3 2025

#### January 2025  

The first month of the year was focused on database research.

Indeed, I discovered Power Designer to create a conceptual data model based on my needs and generate a database.

Then, I installed DB Browser to use the SQLite database, and I was able to create a prototype database test where I can perform different query operations: GET, UPDATE, INSERT, and DELETE.

**SPRINT:** Unfortunately, I focused too much on trying the database.

I need to work more regularly on coding as well as on the various documents required for the project. So, starting next month, I need to balance coding and document writing.

I should also implement sprints each week, so I need to update the monthly report template.

Finally, I plan to go to the ALGOSUP library to check resources about the Qt Framework, and I need to have a meeting with Franck to discuss the Moonshot project further.


#### February 2025  

That month, I was especially focused on the project code. Indeed, I took the opportunity to build new pages, `.ui` files, and new classes for my app.

Many changes were made during the vacation, as I realized the number of features I wanted to implement was too ambitious. Instead of creating an RPG simulator inspired by various RPG games, I decided to focus on the Pokémon battle mechanics.

That’s why I changed my priorities and decided to work on the simulation menu as soon as possible. In fact, I want to take an approach focused on implementing simpler features.

I’m satisfied with my progress, and I plan to have a first released version of my project ready by April 2025.


#### March 2025  

Despite medical conditions, I was able to make progress in the development of my project.

I reached a point where the simulation menu is closer to the original Pokémon games, with two attack actions possible and a Quit menu.

However, I focused a lot on creating the Simulation menu, so I need to reorganize my task schedule, especially the documentation tasks. Updating my MVP will require me to review the current version of my Functional Specifications.

As I plan to start working on the Rules menu, I should consider the interface design of the other menus and seek advice from other students regarding organization.


#### April 2025  

I managed to create and connect the Rules menu to my Simulation menu, allowing activation or deactivation of certain features, such as specific capacities or the PP system.

My simulation can now include healing and buffing moves, and I created new external files to set up the battle. However, I still encountered some issues, such as a crashing debug mode and a simple but defective AI entity.

I’m also close to finishing a new version of my Moonshot Project, but I need to consider whether I’ll be able to complete the next version by May.

Furthermore, I need to work more regularly on the documentation, starting with revising the functional specifications as soon as possible, followed by the other documents.

In any case, I plan to fix the AI issue and see if I can continue adding new features in May.


#### May 2025 

May 2025 marked the end of the code development phase for Kritical Hit, at least for the first version.

I had to stop adding new features in order to focus on completing the remaining documentation.

Since I was very late on the document due June 9th, I decided to use ChatGPT and NinjaAI to help speed up the process.

I rewrote the functional specifications and completed the test plan, but I still need to finish the test cases, bug tracking, and technical specifications. Additionally, I must review everything and eventually merge the documents into a single file.

The following month will be dedicated primarily to preparing for the oral presentation, where I need to develop a compelling 40-minute storytelling.

#### Partial Year Review (Through May)

The final months focused on completion and documentation:

**Key Achievements**:

- Implemented database functionality
- Created working battle simulation
- Added rules menu and game mechanics
- Developed AI system (though with issues)
- Started completing required documentation

**Main Challenges**:

- Time pressure to complete documentation
- Technical issues with AI and debugging
- Balancing feature completion with documentation needs
- Medical conditions affecting work in March

**Overall Status**: Project entered final phase with focus on completing minimum viable product and required documentation, though time pressure became significant factor.

### Final Review

The project evolved from an ambitious RPG battle simulator to a more focused Pokémon-style battle system, with steady if slower than planned progress toward completion. Each year showed distinct phases: planning (2023), implementation (2024), and completion/documentation (2025).

# 3. Functional Specifications

## 3.1. Overview

### 3.1.1. Document Purpose

### 3.1.2. Context

### 3.1.3. RPG Domain

## 3.2. Product Goal

### 3.2.1. Project Scope

### 3.2.2. Constraints

### 3.2.3. Risks and Assumptions

## 3.3. User Personas

### 3.3.1. Henri Hollais

### 3.3.2. Violet Hitgoh

### 3.3.3. Arun Reddy

### 3.3.4. Luke Atmadohg

### 3.3.5. Katrina Ladalh

## 3.4. List of Features

### 3.4.1. User-Friendly Application

### 3.4.2. Battle Interface and Flow Simulation

### 3.4.3. Battle Mechanics System

### 3.4.4. Set Up Battle

## 3.5. Product Details

### 3.5.1. Minimum Viable Product

### 3.5.2. Non-Functional Requirements

### 3.5.3. Acceptance Criteria

### 3.5.4. Out of Scope

## 3.6. Technical Stack & Requirements

### 3.6.1. Development Environment

### 3.6.2. Database Overview

### 3.6.3. System Requirements

## 3.7. Testing Strategy Overview

### 3.7.1. Testing Objectives

### 3.7.2. Testing Scope

## 3.8. User Interface & User Experience

### 3.8.1. Importance

### 3.8.2. User Flowchart

### 3.8.3. UI Elements

### 3.8.4. Accessibility and Responsiveness

### 3.8.5. Visual Feedback and Error Handling

## 3.9. Glossary

### 3.9.1. RPG Lexical Field

### 3.9.2. Miscallenous


