class Test_TweakClutterCompositionDialog
{
	idd = 4711;//TEST_IDD_TWEAKCLUTTERCOMPOSITIONDIALOG;
	movingEnable = false;
	enableSimulation = 1;
	onLoad = "['onLoad',_this,'TEST_TweakClutterCompositionDialog'] spawn TEST_fnc_initTweakClutterCompositionDialog;";
	controlsBackGround[] =
	{
		LeftBackground,
		RightBackground,
//		TopBackground,
//		BottomBackground,
		ModelBackground,
		TopBox_01_ClutterGrid_Text,TopBox_01_ClutterGrid_Value,TopBox_02_ClutterDistance_Text,TopBox_02_ClutterDistance_Value,
		LeftBox_01_CheckBox,LeftBox_01_ClutterProbability,LeftBox_01_ClutterName,LeftBox_01_ProbabilitySlider,LeftBox_01_ScaleMin_Text,LeftBox_01_ScaleMin_Value,LeftBox_01_ScaleMax_Text,LeftBox_01_ScaleMax_Value,
		LeftBox_02_CheckBox,LeftBox_02_ClutterProbability,LeftBox_02_ClutterName,LeftBox_02_ProbabilitySlider,LeftBox_02_ScaleMin_Text,LeftBox_02_ScaleMin_Value,LeftBox_02_ScaleMax_Text,LeftBox_02_ScaleMax_Value,
		LeftBox_03_CheckBox,LeftBox_03_ClutterProbability,LeftBox_03_ClutterName,LeftBox_03_ProbabilitySlider,LeftBox_03_ScaleMin_Text,LeftBox_03_ScaleMin_Value,LeftBox_03_ScaleMax_Text,LeftBox_03_ScaleMax_Value,
		LeftBox_04_CheckBox,LeftBox_04_ClutterProbability,LeftBox_04_ClutterName,LeftBox_04_ProbabilitySlider,LeftBox_04_ScaleMin_Text,LeftBox_04_ScaleMin_Value,LeftBox_04_ScaleMax_Text,LeftBox_04_ScaleMax_Value,
		LeftBox_05_CheckBox,LeftBox_05_ClutterProbability,LeftBox_05_ClutterName,LeftBox_05_ProbabilitySlider,LeftBox_05_ScaleMin_Text,LeftBox_05_ScaleMin_Value,LeftBox_05_ScaleMax_Text,LeftBox_05_ScaleMax_Value,
		LeftBox_06_CheckBox,LeftBox_06_ClutterProbability,LeftBox_06_ClutterName,LeftBox_06_ProbabilitySlider,LeftBox_06_ScaleMin_Text,LeftBox_06_ScaleMin_Value,LeftBox_06_ScaleMax_Text,LeftBox_06_ScaleMax_Value,
		LeftBox_07_CheckBox,LeftBox_07_ClutterProbability,LeftBox_07_ClutterName,LeftBox_07_ProbabilitySlider,LeftBox_07_ScaleMin_Text,LeftBox_07_ScaleMin_Value,LeftBox_07_ScaleMax_Text,LeftBox_07_ScaleMax_Value,
		LeftBox_08_CheckBox,LeftBox_08_ClutterProbability,LeftBox_08_ClutterName,LeftBox_08_ProbabilitySlider,LeftBox_08_ScaleMin_Text,LeftBox_08_ScaleMin_Value,LeftBox_08_ScaleMax_Text,LeftBox_08_ScaleMax_Value,
		LeftBox_09_CheckBox,LeftBox_09_ClutterProbability,LeftBox_09_ClutterName,LeftBox_09_ProbabilitySlider,LeftBox_09_ScaleMin_Text,LeftBox_09_ScaleMin_Value,LeftBox_09_ScaleMax_Text,LeftBox_09_ScaleMax_Value,
		LeftBox_10_CheckBox,LeftBox_10_ClutterProbability,LeftBox_10_ClutterName,LeftBox_10_ProbabilitySlider,LeftBox_10_ScaleMin_Text,LeftBox_10_ScaleMin_Value,LeftBox_10_ScaleMax_Text,LeftBox_10_ScaleMax_Value,
		ClutterList,
		DummyBackground
	};
	controls[] =
	{
	};
	class Objects
	{
		class ObjectPreview
		{
			access = 0;
			shadow = 1;
			type = 82;
			idc = 9999;

			scale = 1.5;

			model = "\A3\Weapons_f\empty.p3d";

			x = "(45/100) * SafeZoneW + SafeZoneX";
			y = "(90/100) * SafeZoneH + SafeZoneY";
			z = 10;

			direction[] = {-0.7,0,1};
//			direction[] = {0,0,0};
			up[] = {0,1,-0.1};
//			up[] = {0,0,0};

//			position[] = {0,0,0.2};
//			positionBack[] = {0,0,0.2};
			xBack = "(45/100) * SafeZoneW + SafeZoneX";
			yBack = "(90/100) * SafeZoneH + SafeZoneY";
			zBack = 10;

			inBack = 0;
			enableZoom = 1;
			zoomDuration = 0.001;
		};
	};

	class LeftBackground: RscText
	{
		idc = 9990;
		colorBackground[] = {0,0,0,1};
		x = "(00/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(20/100) * SafeZoneW";
		h = "(100/100) * SafeZoneH";
	};
	class RightBackground: RscText
	{
		idc = 9991;
		colorBackground[] = {0,0,0,1};
		x = "(80/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(20/100) * SafeZoneW";
		h = "(100/100) * SafeZoneH";
	};
	class TopBackground: RscText
	{
		idc = 9992;
		colorBackground[] = {0,0,0,1};
		x = "(30/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(70/100) * SafeZoneW";
		h = "(03/100) * SafeZoneH";
	};
	class BottomBackground: RscText
	{
		idc = 9993;
		colorBackground[] = {0,0,0,1};
		x = "(30/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(97/100) * SafeZoneW";
		h = "(03/100) * SafeZoneH";
	};
	class ModelBackground: RscText//: RscPicture
	{
		idc = 9990;
		colorBackground[] = {0,0,0,0.5};
		text = "";//"\a3\Ui_f\data\GUI\Rsc\RscDisplayFieldManual\gradient_ca.paa";
		x = "(25/100) * SafeZoneW + SafeZoneX";
		y = "(80/100) * SafeZoneH + SafeZoneY";
		w = "(50/100) * SafeZoneW";
		h = "(20/100) * SafeZoneH";
//		x = "safezoneX + (16.1 * (((safezoneW / safezoneH) min 1.2) / 40))";
//		y = "SafezoneY + (3.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
//		w = "safezoneW - ((40 - 22.9) * (((safezoneW / safezoneH) min 1.2) / 40))";
//		h = "SafezoneH - (5.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
//		colorText[] = {1,1,1,0.2};
//		colorText[] = {0,0,0,1};
//		fade = 1;
	};

	class DummyBackground: RscText
	{
		colorBackground[] = {0,0,0,1};
		x = "(00/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(00/100) * SafeZoneW";
		h = "(00/100) * SafeZoneH";
	};



	class TopBox_01_ClutterGrid_Text: RscText		{idc = 3001; x = "(25/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(08/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "ClutterGrid";};
	class TopBox_01_ClutterGrid_Value: RscEdit		{idc = 3002; x = "(34/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};
	class TopBox_02_ClutterDistance_Text: RscText		{idc = 3003; x = "(40/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(10/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "ClutterDistance";};
	class TopBox_02_ClutterDistance_Value: RscEdit		{idc = 3004; x = "(51/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};

	class LeftBox_Base_CheckBox: RscCheckBox		{x = "(0.5/100)* SafeZoneW + SafeZoneX"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class LeftBox_Base_ClutterProbability: RscEdit		{x = "(04/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "000";};
	class LeftBox_Base_ClutterName: RscText			{x = "(08/100) * SafeZoneW + SafeZoneX"; w = "(12/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "Very long name at least"; SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";};//style = 2; colorBackground[] = {0,0,0,1}; colorText[] = {0,0,0,1}; shadow = 0; text = "-";};
	class LeftBox_Base_ProbabilitySlider: RscSlider		{x = "(04/100) * SafeZoneW + SafeZoneX"; w = "(16/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class LeftBox_Base_ScaleMin_Text: RscText		{x = "(04/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "Min";};
	class LeftBox_Base_ScaleMin_Value: RscEdit		{x = "(08/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};
	class LeftBox_Base_ScaleMax_Text: RscText		{x = "(12/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "Max";};
	class LeftBox_Base_ScaleMax_Value: RscEdit		{x = "(16/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};


	class LeftBox_01_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0100; y = "((00 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0100; y = "((00 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0100; y = "((00 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0100; y = "((00 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0100; y = "((00 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0100; y = "((00 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0100; y = "((00 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0100; y = "((00 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_02_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0200; y = "((01 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0200; y = "((01 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0200; y = "((01 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0200; y = "((01 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0200; y = "((01 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0200; y = "((01 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0200; y = "((01 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0200; y = "((01 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_03_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0300; y = "((02 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0300; y = "((02 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0300; y = "((02 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0300; y = "((02 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0300; y = "((02 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0300; y = "((02 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0300; y = "((02 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0300; y = "((02 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_04_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0400; y = "((03 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0400; y = "((03 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0400; y = "((03 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0400; y = "((03 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0400; y = "((03 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0400; y = "((03 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0400; y = "((03 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0400; y = "((03 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_05_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0500; y = "((04 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0500; y = "((04 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0500; y = "((04 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0500; y = "((04 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0500; y = "((04 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0500; y = "((04 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0500; y = "((04 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0500; y = "((04 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_06_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0600; y = "((05 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0600; y = "((05 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0600; y = "((05 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0600; y = "((05 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0600; y = "((05 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0600; y = "((05 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0600; y = "((05 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0600; y = "((05 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_07_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0700; y = "((06 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0700; y = "((06 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0700; y = "((06 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0700; y = "((06 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0700; y = "((06 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0700; y = "((06 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0700; y = "((06 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0700; y = "((06 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_08_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0800; y = "((07 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0800; y = "((07 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0800; y = "((07 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0800; y = "((07 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0800; y = "((07 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0800; y = "((07 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0800; y = "((07 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0800; y = "((07 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_09_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0900; y = "((08 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 0900; y = "((08 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 0900; y = "((08 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 0900; y = "((08 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 0900; y = "((08 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 0900; y = "((08 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 0900; y = "((08 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 0900; y = "((08 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_10_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 1000; y = "((09 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ClutterProbability: LeftBox_Base_ClutterProbability	{idc = 1001 + 1000; y = "((09 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ClutterName: LeftBox_Base_ClutterName			{idc = 1002 + 1000; y = "((09 * 10 + 0)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ProbabilitySlider: LeftBox_Base_ProbabilitySlider	{idc = 1007 + 1000; y = "((09 * 10 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ScaleMin_Text: LeftBox_Base_ScaleMin_Text		{idc = 1003 + 1000; y = "((09 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ScaleMin_Value: LeftBox_Base_ScaleMin_Value		{idc = 1004 + 1000; y = "((09 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ScaleMax_Text: LeftBox_Base_ScaleMax_Text		{idc = 1005 + 1000; y = "((09 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_ScaleMax_Value: LeftBox_Base_ScaleMax_Value		{idc = 1006 + 1000; y = "((09 * 10 + 6)/100) * SafeZoneH + SafeZoneY";};

	class ClutterList: RscListBox//RscListNBox//RscListBox
	{
		idc = 100;
		x = "(60/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(40/100) * SafeZoneW";
		h = "(100/100) * SafeZoneH";

		period = 0;
		blinkingPeriod = 0;

//		columns[] = {0,0.2,0.4,0.6,0.7};
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
		onLBSelChanged = "_this spawn TEST_fnc_assignClutter";
//		onLBDblClick = "_this spawn TEST_fnc_assignClutter";
	};
};
