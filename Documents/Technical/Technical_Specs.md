# Moonshot Project: KriticalHit - Technical Specifications

| Author        | Paul NOWAK |
|---------------|------------ |
| Created       | July 12th 2024  |
| Last Modified | June 6th 2025  |
| Document Deadline | June 9th 2025 |

## Table of Contents

<details open>
<summary>Table of Contents</summary>

- [1. Overview](#1-overview)
  - [1.1 Document Purpose](#11-document-purpose)
  - [1.2 Project Presentation](#12-project-presentation)
  - [1.3 System Overview](#13-system-overview)
- [2. System Architecture](#2-system-architecture)
  - [2.1 App Architecture](#21-app-architecture)
  - [2.2 Modules and Components](#22-modules-and-components)
  - [2.3 Other External IT Tools](#23-other-external-it-tools)
- [3. Technologies Used](#3-technologies-used)
  - [3.1 Front End](#31-front-end)
  - [3.2 Back End](#32-back-end)
  - [3.3 Database Design](#33-database-design)
  - [3.4 Technical Constraints and Limitations](#34-technical-constraints-and-limitations)
  - [3.5 Non-Functional Requirements](#35-non-functional-requirements)
- [4. Application Features](#4-application-features)
  - [4.1 Setting Up Battle Templates](#41-setting-up-battle-templates)
  - [4.2 Rules Implementation](#42-rules-implementation)
  - [4.3 Characters Implementation](#43-characters-implementation)
  - [4.4 Stats Implementation](#44-stats-implementation)
  - [4.5 Skills Implementation](#45-skills-implementation)
  - [4.6 Statuses Implementation](#46-statuses-implementation)
  - [4.7 Battle Simulation](#47-battle-simulation)
  - [4.8 Script Converter](#48-script-converter)
- [5. Data Management](#5-data-management)
  - [5.1 Data Management Strategy](#51-data-management-strategy)
  - [5.2 Type of Data Storage](#52-type-of-data-storage)
  - [5.3 API for Handling Data](#53-api-for-handling-data)
  - [5.4 Data Flow Diagrams](#54-data-flow-diagrams)
  - [5.5 Data Security](#55-data-security)
- [6. Product Deployment](#6-product-deployment)
  - [6.1 Deployment Environment](#61-deployment-environment)
  - [6.2 Release Schedule](#62-release-schedule)
  - [6.3 Proof of Concepts](#63-proof-of-concepts)
  - [6.4 Beta Version](#64-beta-version)
  - [6.5 Full Versions](#65-full-versions)
- [7. Glossary](#7-glossary)

</details>

## 1. Overview

### 1.1 Document Purpose

This document has been created to provide the technical specification of a Moonshot Project named Kritical Hit. In fact, the Moonshot Project is a final evaluation imposed by the ALGOSUP school to create our own unique and professional project through the whole scolarity and to validate our Master level in Software development.

Furthemore, it's a complementary document to the Functionnal Specifications while showcasing the technical details required for the project and the strategies planned to accomplish it. 

### 1.2 Project Presentation

Kritical Hit is a Desktop Application and Game Development assistant tool designed to support the creation of Combat Design systems for RPG games, with a particular emphasis on the mechanics found in Pokémon-style gameplay.

The application will feature a **user-friendly interface** aimed at providing intuitive navigation across all tools and functionalities. Special attention will be given to ensuring accessibility for both novice and experienced developers. Users will easily access core modules such as battle simulation, character setup, and rule customization through clearly organized menus and visually guided workflows.

A key component of the interface will be the **Simulation Menu**, where users can test and visualize the behavior of an RPG game's combat system in real time. This simulation environment enables immediate feedback and iterative design, allowing developers to fine-tune their systems effectively.

Once users are familiar with the simulation tools, they can dive into the **template customization** system. Kritical Hit will support the creation, modification, and storage of multiple battle templates. These templates include settings for battle rules, character selection, and other RPG assets. The internal database will allow templates to be saved, loaded, and shared, making it easy to manage different combat configurations and test scenarios.

This structure ensures that developers can first explore, test, and refine ideas through the interface and simulation tools, before committing to more advanced template editing.

### 1.3 System Overview

The software will be developed as a **desktop application** to guarantee high performance and responsiveness, especially given the significant volume of data involved in RPG combat system design and simulation. This local setup ensures smooth functionality without relying on internet speed, which is essential for maintaining consistency during real-time simulations and UI interactions.

Kritical Hit will be developed using **C++** in combination with the **Qt framework**, leveraging its robust support for graphical user interface (GUI) development. **Qt Creator**, a dedicated IDE for Qt applications, will be used to manage the design and implementation of the interface and underlying logic.

Qt offers cross-platform capabilities and a comprehensive set of software libraries and APIs tailored for scalable desktop and embedded applications. This makes it a strong fit for building an application that is both **modular and maintainable**, while supporting rich UI features and responsive simulation tools essential for Kritical Hit’s goals.

The choice of C++ and Qt ensures that the application can handle complex data structures and intensive simulation processes, all while delivering a seamless and user-friendly interface experience.

## 2. System Architecture

### 2.1 App Architecture

### 2.2 Modules and Components

### 2.3 Other External IT Tools

## 3. Technologies Used

### 3.1 Front End

### 3.2 Back End

### 3.3 Database Design

### 3.4 Technical Constraints and Limitations

### 3.5 Non-Functional Requirements

## 4. Application Features

### 4.1 Setting Up Battle Templates

### 4.2 Rules Implementation

### 4.3 Characters Implementation

### 4.4 Stats Implementation

### 4.5 Skills Implementation

### 4.6 Statuses Implementation

### 4.7 Battle Simulation

### 4.8 Script Converter

## 5. Data Management

### 5.1 Data Management Strategy

### 5.2 Type of Data Storage

### 5.3 API for Handling Data

### 5.4 Data Flow Diagrams

### 5.5 Data Security

## 6. Product Deployment

### 6.1 Deployment Environment

### 6.2 Release Schedule

### 6.3 Proof of Concepts

### 6.4 Beta Version

### 6.5 Full Versions

## 7. Glossary

