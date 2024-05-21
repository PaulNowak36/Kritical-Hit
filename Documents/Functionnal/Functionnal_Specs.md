# Moonshot Project: KriticalHit - Functional Specifications

## Table of Contents

<details open>
<summary>Table of Contents</summary>

 - [1. Overview](#1-overview)
   - [1.1 Document Purpose](#11-document-purpose)
   - [1.2 Context](#12-context)
   - [1.3 RPG Domain](#13-rpg-domain)
 - [2. Product Goal](#2-product-goal)
   - [2.1 Project Scope](#21-project-scope)
   - [2.2 Constraints](#22-constraints)
   - [2.3 Risks and Assumptions](#23-risks-and-assumptions)
 - [3. Audience study](#3-audience-study)
   - [3.1 User Personas](#31-user-personas)
     - [3.1.1 Henri Hollais](#311-henri-hollais)
     - [3.1.2 Violet Hitgoh](#312-violet-hitgoh)
     - [3.1.3 Arun Reddy](#313-arun-reddy)
     - [3.1.4 Luke Atmadohg](#314-luke-atmadohg)
     - [3.1.5 Katrina Ladalh](#315-katrina-ladalh)
   - [3.2 Survey](#32-survey)
 - [4. List of features](#4-list-of-features)
 - [5. Product Details](#5-product-details)
   - [5.1 Minimum Viable Product](#41-minimum-viable-product)
   - [5.2 Non-Functional Requirements](#52-non-functional-requirements)
   - [5.3 Prototype and User Interface](#53-prototype-and-user-interface)
   - [5.4 Acceptance Criteria](#54-acceptance-criteria)
   - [5.5 Security](#55-security)
 - [5. Related Documents](#5-related-documents)
 - [6. Glossary](#6-glossary)
   - [6.1 RPG Lexical Field](#61-rpg-lexical-field)
   - [6.2 Miscallenous](#62-miscallenous)
 - [7. Sources](#7-sources)
</details>

# 1. Overview

### 1.1 Document Purpose
This document has been written to provide the functional specification of a Moonshot Project named Kritical Hit. In fact, the Moonshot Project is a final evaluation imposed by the ALGOSUP school to create our own unique and professional project through the whole scolarity and to validate our Master level in Software development.

### 1.2 Context
Video games have always been a huge domain in the entertainment industry, generating nowadays around 180 billions of american dollars. Indeed, the market is still in constant evolution due to the improvement of video game hardwares and softwares, especially thanks to the rise of the game engines. While they are also used in other varieties of industries, they brought an innovative approach to create more sophisticated games due to the complexity of the most modern iterations.

However, the development of a video game has always been a long and minutious task for many software engineers. Due to the development of the new technologies and the evolution of the general audience tastes, video games need to reach a good level of performance and quality to be appealing and marketable.

As an instance, the role-playing represent a unique genre in the video game industry that is greatly loved by players. Though, this genre require several features to be taken into account, notably the battle system that represent the charm of RPGs and draw diverse players. That's why game design softwares are used to build them up.

The problem is that these kinds of software, despite the freedom they provide, either have limited resources or doesn't look appealing enough for new gamemakers. Furthermore, installing plugins to improve these "helpful" tools would be too time consuming for amateurs and game designers.

### 1.3 RPG Domain

An RPG (Role-Play Game) is a game where the player embodies a fictional character that will evolve, often alongside other characters, where he will accomplish diverse quests, fight enemies and explore a more or less imaginary world. Indeed, RPGs are based on a point system and experience level that can be increased and allow the player to get stronger and receive new abilities. 

Inspired by several sources like the Dungeon and Dragons pen-and-paper games and fantasy writings authors like J. R. R. Tolkien, RPGs bring a whole new concept of entertainment with the success of Franchises like Pokemon, Final Fantasy, and Dragon Quest. Throughout time, they differienced themselves in subgenres like Action RPG (including action gameplay) and MMORPG (online role-playing).

Each player chooses a character, whether completely create him or emboding a defined one (like Cloud from Final Fantasy VII), and have the freedom to change its appearance (clothes, weapons, magic powers) and its statistics (strength, agility, vitality...).


## 2. Product Goal

### 2.1 Project Scope
In order to assist either game design amateurs or professional developpers, the goal will be to conceive a desktop application quite similar to a game engine. 

In fact, it will be a software implemented with a user-friendly interface that will assist people to set up the battle system rules for a future RPG game in development. It will allow the user to express his creativity and allow him the freedom to create countless variations of RPG battle templates.

Eventually, these are the expected main features that will complete the product:

  - The software will allow the user to navigate through the different menus with an understandable and colorful interface similar to the game Super Mario Maker.
  - The software must be able to contain a large database of data including many battle templates.
  - The user must be able to create RPG characters and test his own battle template by simulating an RPG fight using these characters.
  - The user will have the possibility to decide how are calculated damages, and how work the different stats, skills and statuses.

### 2.2 Constraints
First of all, this project will be accomplished by someone who has never created a single software on his own ever before. Indeed, this Moonshot Project has to be realized individually, without any active assistance from other students, teachers or professional alike. 

As a consequence, investments are impossible, so this project must only rely on limited local budget, hardware equipment and software tools.

Furthermore, the product's development will be realized by a single contributor who will accomplish the entirety of the scheduled tasks with limited help, but also with limited work time due to his current studies. In fact, the contributor needs to accomplish this Moonshot Project to validate his degree, but without any clear deadline, he will need to adapt his task schedule depending on his studies' progression.

### 2.3 Risks and Assumptions

### 2.3.1 Risks 
|   **Risk**  |   **Impact** |  **Mitigation**  |                     
|   :-------  |   :--------- |  :-------------  |
|   **Insuffisant app responsive speed**  |   The computer's performance might not be fast enough to allow the user to test the app properly |  Extended researches about app's speed and responsiveness must be performed  |
|  **User-friendly interface bad outcomes**  |   Focusing on a simplified interactivity with the software can create limits of its potential and functionality  |  Highlighting the importance of testing UI prototypes to balance usability and simplicity   |
|   **Complex UI effects** |   Some planned UI widgets may be too difficult and complex to implement in the software and could decrease its responsiveness   |  Creation of UI prototypes   |
|   **Heavy database** |   The software's response could be slow due to the required amount of database stored in back-end  |  Further studies of database app storage   |

### 2.3.2 Assumptions 
|   **Assumption**  |   **Impact** |  **Mitigation**  |                     
|   :-------  |   :--------- |  :-------------  |
|   **2D character models**  |   To simulate RPG battle, 2D characters should be represented as they required less space in the memory than 3D ones |  Finding how to integrate 2D sprites in an app and make them react  |
|   **Tree representations**  |   It could bring visibility to the user to have a clearier view on certain features such as stats |  Research on tree-like representation UI models  |
|   **Interactive tutorial**  |   A tutorial could be added to help the user get familiarized with the product |  Search how to implement a tutorial in an app  |
|   **Battle systems RPG**  |   RPG battle systems are various and unique, so we need to make sure the user gets enough creativity for his own taste|  Several battle systems must be tested out   |


## 3. Audience study

### 3.1 User Personas

#### 3.1.1 Henri Hollais

<img src="Images/Persona_1.png" style="height: 400px">

#### 3.1.2 Violet Hitgoh

<img src="Images/Persona_2.png" style="height: 400px">

#### 3.1.3 Arun Reddy

<img src="Images/Persona_3.png" style="height: 400px">

#### 3.1.4 Luke Atmadohg

<img src="Images/Persona_4.png" style="height: 400px">

#### 3.1.5 Katrina Ladalh

<img src="Images/Persona_5.png" style="height: 400px">

#### 3.2 Survey
AAA

## 4. List of Features

The software contain a variety of features, that belong to 5 big domains:

- **Template Creation**: The features involving the set up of our own battle mechanics for a rpg battle, the use of different tools to customize them, and their simulation.

- **Character Creation**: The features allowing to create a particular character class as an "actor" for a targeted battle system.

- **Stats Creation**: The features to create and modify the stats for a particular battle system and its characters.

- **Skills Creation**: The features to set up the different skills and abilities of a battle system and its characters.

- **Status Creation**: The features to set up new status effects which will influence the gameplay of the battle system and its character.


In fact, many of these functionalities could be challenging to be implemented during the development. So, the MoSCoW matrix method will also be used to sort each features and sub-sub features by how likely they will be implemented.

### 4.1. Must-Have
These features are mandatory and non-negociable needs for this project.

#### 4.1.1. Template Creation:
- RPG Style: Allow the user to choose what kind of RPG style he want for his battle system.
  - Default Style: Allow the user to choose an RPG style similar to an existing game. A few choices will be proposed to the user.
    - Final Fantasy 
- AAA
- AAA

#### 4.1.2. Character Creation:
- AAA
- AAA
- AAA

#### 4.1.3. Stats Creation:
- AAA
- AAA
- AAA

#### 4.1.4. Skills Creation:
- AAA
- AAA
- AAA

#### 4.1.5. Status Creation:
- AAA
- AAA
- AAA

### 4.2. Should-Have
These features are essential to the product, but they don't represent a vital part.

#### 4.2.1. Template Creation:
- AAA
- AAA
- AAA

#### 4.2.2. Character Creation:
- AAA
- AAA
- AAA

#### 4.2.3. Stats Creation:
- AAA
- AAA
- AAA

#### 4.2.4. Skills Creation:
- AAA
- AAA
- AAA

#### 4.2.5. Status Creation:
- AAA
- AAA
- AAA

### 4.3. Could-Have
These features aren't necessary to the core product and have a much smaller impact if left out, but they are considered as "nice-to-have".

#### 4.3.1. Template Creation:
- AAA
- AAA
- AAA

#### 4.3.2. Character Creation:
- AAA
- AAA
- AAA

#### 4.3.3. Stats Creation:
- AAA
- AAA
- AAA

#### 4.3.4. Skills Creation:
- AAA
- AAA
- AAA

#### 4.3.5. Status Creation:
- AAA
- AAA
- AAA

## 5. Product Details

### 5.1 Minimum Viable Product
|   **Phase**  |   **Added features** |  **Version**  |                     
|   :-------  |   :--------- |  :-------------  |
|   **Phase 1**  |   App squeleton + Simple background + template menu |  0.1 |
|   **Phase 2**  |   Rules menu |  0.2 |
|   **Phase 3**  |   Simple UI effects + simulation menu + Additional backgrounds  |  0.4 (Alpha) |
|   **Phase 4**  |   Template gallery + Character menu |  0.6 |
|   **Phase 5**  |   Stats menu + Damage calculator + extra UI effects + Additional backgrounds |  0.7 (Beta) |
|   **Phase 6**  |   Skills menu |  0.8 |
|   **Phase 7**  |   Status menu + Additional backgrounds and UI effects + Advanced simulation|  0.9 |
|   **Phase 8**  |   Code conversion + settings |  1.0 |


### 5.2 Non-Functional Requirements
AAA

### 5.3 Prototype and User Interface
AAA

### 5.4 Acceptance Criteria
AAA

### 5.5 Security
AAA

## 6. Related Documents
AAA

## 7. Glossary

### 7.1. RPG Lexical Field

|         Term         |                  Definition                   |  
| :------------------: | :------------------------------------------: | 
| **Ability** |   Also called "Trait", it's a specific characteristic of a character, generally allowing him to provide advantages during certain situations in battle.    |
| **Buff** |   A skill, ability or other game mechanic that improves a character's capabilities to increase his effectiveness.    |
| **Character** |   Persona created with characteristics embodied by a player within the context of the game.    |
| **Critical Hit** |   Successful attack dealing greater damage than a normal attack which occurs generally depending on the player's luck. Also nicknamed "Crit".    |
| **Damage** |   In game, any form of pain that decrease a character's life due to an attack is expressed as a damage.    |
|**Defend** |   Also called "Guard", action performed by a character to protect himself from an oncoming attack, generally to reduce the damage received.    |
| **Element** |   An attribute given to a character that refers to a type of attribute that can be applied to a skill, an effect or a character itself. Several can be used to create strengths and weaknesses for the different actors of the RPG battle. |
| **H.P.** |   Abbreviation for "Hit Points", represents how much damage a character can take before being knocked out.     |
| **Hazard** |   Passive effect affecting the entire battlefield in a fight that can hinders (or benefit) all characters.    |
| **K.O.** |   Abbreviation for "Knocked Out", state when a character have lost all of his HPs and is unable to fight.    |
| **Modifiers** |   Factors influencing a battle that allow the calculation of several attributes, like the total damage, or a specific stat.   |
| **Nerf** |    Also called "debuff", it's a skill, ability or other game mechanic that decrease a character's capabilities to reduce his effectiveness.    |
| **S.P.** |   Abbreviation for "Skill Points" and also called "mana", a limited quantity of points possessed by a character allowing him to uses a particular skill at the cost of a few of them.     |
| **Skill** |   Particular action performed by a character during a battle. It allows to either attack the enemy, provides an effect or both, sometimes at the cost of a few SPs.   |
| **Special Ability** |   Abilities characterized as game mechanics which provide a passive effect to a character in battle, like an immunity to an element.    |
| **Stat** |   Numerical value that applies to a character's ability (Attack, Defense, Speed...).    |
| **Status** |   Specific state affected to a character, generally negative, causing effects such as losing HPs each turn (poison) or being slowed down (paralyzis).    |

### 7.2. Miscallenous

|         Term         |                  Definition                   |  
| :------------------: | :------------------------------------------: | 
| **Game Design** |   Processus of creation and development of rules and other constituent elements of a video game.    |
| **Plugin** |   Software conceived to be implemented in another software through an interface and bringing new features to the latter.    |
| **Prototype** |   Trial version and/or simulation of a software product made to provide a preview before its final version.    |

## 8. Sources
AAA

https://rpggeek.com/