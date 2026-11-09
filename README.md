# ⚔️ KriticalHit

## Overview
The goal of this project is to create a software application that will help developpers create battle system for RPGs games. Indeed, the product will have a user-friendly interface and will be able to propose several features like setting up stats, creating damage calculators, managing battle mechanics templates, and also simulating RPG battles.

---

## Documents

### Written Report (V1.0)
- [Written Report 1.0](https://github.com/PaulNowak36/Kritical-Hit/blob/master/KriticalHit%20Written%20Report%20V1.0.pdf)

### Presentation
- [Initial Presentation](https://github.com/PaulNowak36/Kritical-Hit/blob/cc2d804b5432e372aad19f742cc96d058caccace/Kritical-Hit/Documents/Presentation.md)

### Specifications
- [Functional Specifications](https://github.com/PaulNowak36/Kritical-Hit/blob/master/Documents/Functionnal/Functionnal_Specs.md)
- [Technical Specifications](https://github.com/PaulNowak36/Kritical-Hit/blob/master/Documents/Technical/Technical_Specs.md)

### Quality Assurance
- [Test Plan](https://github.com/PaulNowak36/Kritical-Hit/blob/master/Documents/Test%20Plan/Test_plan.md)
- [Test Cases](https://github.com/PaulNowak36/Kritical-Hit/blob/master/Documents/Test%20Plan/Testing_Cases.md)

---

## 🖥️ Requirements

- Windows 10 or Windows 11 (64-bit)
- No installation required

---

## 🚀 How to Download and Run

### Step 1 — Download the latest release
Go to the [Releases](https://github.com/PaulNowak36/Kritical-Hit/releases) page and download `KriticalHit_V1.1.zip`.

### Step 2 — Extract the zip
Right-click on `KriticalHit_V1.1.zip` and select **"Extract All"**.
Extract it anywhere on your PC, for example: `C:\KriticalHit_V1.1\`

### Step 3 — Run the application
Open the extracted folder and double-click on `KriticalHit_App.exe`

That's it — no installation, no Qt required! 🎮

---

## 🎮 How to Use

### Main Menu
- Enter the credentials to log in:
  - **Username:** `algoPaul`
  - **Password:** `IPlayPKMNGo`

### Rules Menu
- Configure the combat rules before starting a simulation:
  - **Healing allowed** — enables healing moves
  - **Buffing allowed** — enables stat-boosting moves
  - **PP System** — enables move usage limits

### Simulation
- Click **"Launch Simulation"** to start a battle
- Choose one of the 4 available attacks each turn
- The opponent plays automatically
- Win by reducing the opponent's HP to 0!

---

## 🗂️ Project Structure

    Kritical-Hit/
    ├── Dev/
    │   └── KriticalHit_App/          ← Source code (Qt/C++)
    │       ├── *.cpp / *.h            ← C++ source files
    │       ├── *.ui                   ← Qt UI forms
    │       ├── KriticalHit_App.pro    ← Qt project file
    │       ├── Images/                ← App images and sprites
    │       ├── rules1.db              ← SQLite database for rules
    │       └── PressStart2P-vaV7.ttf  ← Custom font

---

## 🛠️ For Developers — Build from Source

### Requirements
- Qt 6.5.3 with MinGW 64-bit
- Qt Creator 19.x

### Steps

1. Clone the repository:

       git clone https://github.com/PaulNowak36/Kritical-Hit.git

2. Open Qt Creator and load: `Kritical-Hit/Dev/KriticalHit_App/KriticalHit_App.pro`

3. Select the kit **Desktop Qt 6.5.3 MinGW 64-bit** and set mode to **Release**.

4. Click **Build → Rebuild All**.

5. Run `windeployqt` to copy all required DLLs:

       C:\Qt\6.5.3\mingw_64\bin\windeployqt.exe --sql "path\to\release\KriticalHit_App.exe"

6. Launch `KriticalHit_App.exe` from the `release/` folder.

---

## 📝 Changelog

### V1.1
- Fixed SQLite driver loading issue on fresh installations
- Fixed image and background display
- Fixed crash when launching simulation
- Improved asset management across build configurations

### V1.0
- Initial release

---

## 👤 Author

**Paul Nowak** — [GitHub](https://github.com/PaulNowak36)
