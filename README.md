# Dirk

This project started as a hobby and still is, any help is appreciated.

# TODO

V.1:
- Setup Localisation
- Make UI
- Make Levels
- Setup Savegames
- Add gameplay elements

UI:
- Add Validation for Level on Join event
- Settings:
  - Graphics:
    - Resolution
    Upscalers:
      - Implement: DLSS, FSR
      - Add plugins for: NIS, XeSS
    - Basic Settings (res, quality)
  - Audio:
    - Volumes
  - Gameplay:
    - Autosave Interval
  - Setup key mapping
- HUD:
  - Health
  - Crosshair
  - Interact on interactable
- Loading Screen:
  - List of tips
  - Progress bar if needed

SaveGames:
- Save Logout positions of all players and add to save game data
- All actors in level
- Autosaves (custom time)

Gameplay:
- Do Ingame Controller elements not in playercontroller (to implement AI)
- Add health
- Turn Weapon component into ProjectileWeapon actor (use arrow component instead of projectile offset)
- Turn Teleport component into actor and add effects (destination and origin)
- Create blade weapon actor
- Setup damage system (projectile and blade)
- Crouch/Slide
- Fall damage
- DirkItem:
  - Generic class for pickupable items
  - Create enum for item type (link to anims)
  - Remove pickup component and intergrate with DirkItem, setup SetItem method in Dirk character that handls snapping and ownership tranfser
- Move Interact Cooldown from pickup to Interact component
- Add water and swimming
- Vehicles/mounts:

C++ and Blueprints:
- Clean up and comment code
