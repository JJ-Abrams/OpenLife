class open_clothingStore {
    idd = 24601;
    name= "open_clothingStore";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {

		class open_RscText_1000: open_RscText
		{
			idc = 1000;
			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.561 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class open_RscText_1001: open_RscText
		{
			idc = 1001;
			text = "Clothing Shop"; //--- ToDo: Localize;
			x = 0.0153129 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscText_1002: open_RscText
		{
			idc = 1002;
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.583 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscCombo_2100: open_RscCombo
		{
			idc = 2100;
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class open_RscListbox_1500: open_RscListbox
		{
			idc = 1500;
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.462 * safezoneH;
		};
		class open_RscStructuredText_1100: open_RscStructuredText
		{
			idc = 1100;
			text = "Total: Â£0"; //--- ToDo: Localize;
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class open_RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			text = "Close"; //--- ToDo: Localize;
			onButtonClick = "closeDialog 2";
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscButtonMenu_2401: open_RscButtonMenu
		{
			idc = 2401;
			text = "BUY"; //--- ToDo: Localize;
			x = 0.108125 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};

	};
};