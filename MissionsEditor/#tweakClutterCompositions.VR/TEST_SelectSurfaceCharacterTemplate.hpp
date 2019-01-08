class TEST_SelectSurfaceCharacterTemplateDialog
{
	idd = 4712;//TEST_IDD_SELECTSURFACECHARACTERTEMPLATEDIALOG;
	movingEnable = false;
	onLoad = "['onLoad',_this,'TEST_SelectSurfaceCharacterTemplateDialog'] spawn test_fnc_initSelectSurfaceCharacterTemplateDialog;";
	controlsBackGround[] =
	{
		TemplateList,
//		PhaseSelection,
		ConfirmButton,CancelButton,
		DummyBackground
	};
	controls[] =
	{
	};

	class LeftBackground: RscText
	{
		idc = 9990;
		colorBackground[] = {0,0,0,1};
		x = "(0/100) * SafeZoneW + SafeZoneX";
		y = "(0/100) * SafeZoneH + SafeZoneY";
		w = "(30/100) * SafeZoneW";
		h = "(100/100) * SafeZoneH";
	};
	class TopBackground: RscText
	{
		idc = 9991;
		colorBackground[] = {0,0,0,1};
		x = "(30/100) * SafeZoneW + SafeZoneX";
		y = "(0/100) * SafeZoneH + SafeZoneY";
		w = "(70/100) * SafeZoneW";
		h = "(3/100) * SafeZoneH";
	};
	class BottomBackground: RscText
	{
		idc = 9992;
		colorBackground[] = {0,0,0,1};
		x = "(29/100) * SafeZoneW + SafeZoneX";
		y = "(84/100) * SafeZoneH + SafeZoneY";
		w = "(72/100) * SafeZoneW";
		h = "(17/100) * SafeZoneH";
	};

	class DummyBackground: RscText
	{
		colorBackground[] = {0,0,0,1};
		x = "(00/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(00/100) * SafeZoneW";
		h = "(00/100) * SafeZoneH";
	};

	class TemplateList: RscListNBox//RscListBox
	{
		idc = 100;
		x = "(05/100) * SafeZoneW + SafeZoneX";
		y = "(10/100) * SafeZoneH + SafeZoneY";
		w = "(90/100) * SafeZoneW";
		h = "(60/100) * SafeZoneH";

		period = 0;
		blinkingPeriod = 0;

		columns[] = {0,0.2,0.4,0.6,0.7};
//		drawSideArrows = 1;
//		idcLeft = 0101;
//		idcRight = 0102;

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		class ListScrollBar
		{
			width = 0; // width of ListScrollBar
			height = 0; // height of ListScrollBar
			scrollSpeed = 0.01; // scrollSpeed of ListScrollBar

			arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
			arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
			border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
			thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

			color[] = {1,1,1,1}; // Scrollbar color
		};

//		colorText[] = {1,1,1,1};
//		colorDisabled[] = {1,1,1,0.25};
//		colorScrollbar[] = {1,0,0,0};
//		colorSelect[] = {0,0,0,1};
//		colorSelect2[] = {0,0,0,1};
//		colorSelectBackground[] = {0.95,0.95,0.95,1};
//		colorSelectBackground2[] = {1,1,1,0.5};
//		colorBackground[] = {0,0,0,0.3};

//		tooltip = "CT_LISTBOX"; // Tooltip text
//		tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
//		tooltipColorText[] = {1,1,1,1}; // Tooltip text color
//		tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

//		onLBSelChanged = "hint str _this";
		onLBSelChanged = "_this spawn test_fnc_previewSurfaceCharacterTemplate";
//		onLBDblClick = "_this spawn test_fnc_previewSurfaceCharacterTemplate";
	};

	class ConfirmButton: RscButton//MenuOK
	{
		idc = 2100;
		text = "Confirm";
		x = "(20/100) * SafeZoneW + SafeZoneX";
		y = "(80/100) * SafeZoneH + SafeZoneY";
		w = "(10/100) * SafeZoneW";
		h = "(05/100) * SafeZoneH";
//		action = "hint str _this";
		action = "_this spawn TEST_fnc_applySurfaceCharacterTemplate;";
		shortcuts[] = {"0x00050000 + 0",28,57,156};
		default = 1;
	};
	class CancelButton: RscButton//MenuCancel
	{
		idc = 2101;
		text = "Cancel";
		x = "(70/100) * SafeZoneW + SafeZoneX";
		y = "(80/100) * SafeZoneH + SafeZoneY";
		w = "(10/100) * SafeZoneW";
		h = "(05/100) * SafeZoneH";
		action = "closeDialog 0;";
		shortcuts[] = {"0x00050000 + 1"};
	};
};
