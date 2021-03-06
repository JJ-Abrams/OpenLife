/*
FileName: fn_keyHandler.sqf
Author: JJ Abrams.
Desctiption: 
Handles Key Press events
*/
params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];

if (_key in [1,17,30,31,32,42,56]) exitwith {};
systemchat str _key;

_interactionKey = if (count (actionKeys "User10") isEqualTo 0) then {219} else {(actionKeys "User10") select 0};

_handled = false;
_curObject = cursorObject;



switch (_key) do {
	
	//ESC
    //case 1: { hint "Escape Key" };
	
	case 2: { player setvariable ["WeaponAway",nil];};
	case 3: { player setvariable ["WeaponAway",nil];};
	
	// T
    case 20: {
		if (_shift) then {
			hint "Surrender";
		} else {
			hint "trunk";
		};
	};
	
	// R
    case 19: {
		if (_shift) then {
			hint "Restrain";
		};
	};
	
	// Y
    case 21: { hint "Y-Menu"};
	
	// U
    case 22: {
		[_curObject] call open_fnc_unlockCar;
	};
	
	//H 
	case 35: {
		if (_shift) then {
			player action ["SWITCHWEAPON",player,player,-1];
			player setvariable ["WeaponAway",true];
		};
	};
	
	case 209: {createDialog "RscDisplayDebugPublic";};
	
	// Interact
    case _interactionKey: {[] call open_fnc_windowsKeyHandler};
};

_handled;