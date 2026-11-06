# Peka Arena

A 3D mobile platformer / arena game built with Unity. Run obstacle-filled levels, collect coins, diamonds and stars, unlock new characters in the shop and progress through levels.

- **Version:** 0.2.0
- **Engine:** Unity 6000.5.7f1 (Unity 6)
- **Platform:** Android (mobile controls with virtual joystick)

## Features

- Multiple levels with checkpoints, respawn and a pause/resume system
- Obstacles: rotating objects, moving platforms, glitching tiles
- Currency system (coins, diamonds) with an in-game shop and character selection
- Kill counter, star collection and level-unlock UI
- Unity Ads (banner, interstitial, rewarded)
- PlayFab SDK integration
- Cinemachine camera, Input System, ragdoll effects

## Getting Started

1. Install **Unity 6000.5.7f1** via Unity Hub (with Android Build Support for mobile builds).
2. Clone the repository:
   ```bash
   git clone <repo-url>
   ```
3. Open the project folder in Unity Hub and let it import (the first import can take a while).
4. Open `Assets/Scenes/MainMenu.unity` and press **Play**.

## Project Structure

| Path | Contents |
|------|----------|
| `Assets/Scenes` | MainMenu, Platformer and Level1–6 scenes |
| `Assets/Script` | Core gameplay: level manager, spawners, pickups, currency, UI, obstacles, ads |
| `Assets/Z_MyScripts` | Game manager, checkpoints, ragdoll, respawn, shop |
| `Assets/Z_Assets` | Level unlock system |
| `Assets/Prefab` | Tiles, stars, player prefab |
| `Assets/PlayFabSDK` | PlayFab SDK |

## Build Order

Scenes in build settings: `MainMenu`, `Platformer`, `Level1`.

## Notes

- Upgraded from Unity 2022.3 to Unity 6. In-App Purchasing (`com.unity.purchasing`) was removed because no code uses it.
- TextMesh Pro is provided by `com.unity.ugui` 2.x.

## Credits

Developed by Rifylclone Games. Uses third-party assets (Unity Standard Assets, Starter Assets, PlayFab SDK, Polygon packs, and others) under their respective licenses.
