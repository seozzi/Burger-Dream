# 🍔 Burger-Dream (VR Experience)

![Burger-Dream Banner](docs/images/banner.png) 
*(Please replace this placeholder with your actual banner image)*

A VR interactive scene project designed for the Meta Quest. Built with Unity and the XR Interaction Toolkit, it features a tense "Act 1" opening sequence where the player is forcefully pulled into an eerie, unknown space—the Burger Shop.

## 🎬 Demo / Gameplay

[![Burger-Dream Act 1 Demo](https://img.youtube.com/vi/YOUR_VIDEO_ID/0.jpg)](https://www.youtube.com/watch?v=YOUR_VIDEO_ID)
*(Click the thumbnail above to watch the gameplay. Replace `YOUR_VIDEO_ID` with your actual YouTube video ID)*

## ✨ Key Features

* **Cinematic Sequence (`Act1Director.cs`):** An imposing opening where a massive burger shop slowly approaches the player.
* **Forced Movement Action:** The moment the door opens, the player is forcefully pushed along the Z-axis into the shop, building high tension.
* **Dynamic Environment Control:** A complete blackout sequence where all scene lights and the skybox are instantly disabled the moment the player is dragged inside.
* **Spatial Audio:** Enhances immersion by synchronizing approaching footsteps, heavy door mechanics, and physical sliding noises through a dedicated `SoundManager`.
* **VR Optimization:** Utilizes Unity XR Management for smooth, pitch-black scene transitions (moving to `BurgerScene`).

## 🛠 Tech Stack

* **Engine:** Unity (Recommended: 6000.5.x)
* **Frameworks:** Unity XR Interaction Toolkit, Meta XR SDK
* **Language:** C#

## 📸 Screenshots

<div align="center">
  <img src="docs/images/screenshot1.png" width="45%" alt="Shop Approaching">
  <img src="docs/images/screenshot2.png" width="45%" alt="Lights Out Sequence">
</div>

> *Left: The Burger Shop approaching the player / Right: The pitch-black sequence right after entry*

## 🚀 Getting Started

### Prerequisites
* Unity Hub and **Unity 6000.5.7f1** or higher.
* Meta Quest headset and a PC VR connection (e.g., Quest Link).

### Installation & Run
1. Clone this repository to your local machine:
   ```bash
   git clone [https://github.com/YOUR_USERNAME/Burger-Dream.git](https://github.com/YOUR_USERNAME/Burger-Dream.git)
