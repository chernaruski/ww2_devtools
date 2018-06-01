startLoadingScreen ["Loading My Mission, please wait..."];

Test_EnvSoundControllers = ["houses","meadows","forest","trees","sea","wind","rain","fog","daytime","night","altitudeGround","altitudeSea","coast","distance","shooting","deadBody"];

Test_EnvSoundControllers = ["wind"];

TEST_Resolution = 100;

TEST_ColorMarkers = [];
TEST_TextMarkers = [];
TEST_EnvSoundControllerValues = [];
TEST_EnvSoundControllerUniqueValues = [];

//toFixed 3;

{
	_envSoundControllers = _x;
	diag_log _envSoundControllers;

	for "_x" from 0 to worldSize step TEST_Resolution do
	{
		for "_y" from 0 to worldSize step TEST_Resolution do
		{
			_position = [_x,_y,0];
			_envSoundControllerValue = (_position getEnvSoundController _envSoundControllers);

			TEST_EnvSoundControllerValues pushBack _envSoundControllerValue;
			TEST_EnvSoundControllerUniqueValues pushBackUnique _envSoundControllerValue;

//			diag_log format ["%1	%2	%3",_x,_y,_envSoundController];

			private _marker = createMarker [format ["TEST_Marker_Color_%1_%2_%3",_envSoundControllers,_x,_y],_position];
			_marker setMarkerShape "RECTANGLE";
			_marker setMarkerBrush "Solid";
			_marker setMarkerAlpha 1;
			_marker setMarkerColor "ColorBlack";
			_marker setMarkerSize [TEST_Resolution,TEST_Resolution];

			TEST_ColorMarkers pushBack _marker;

			if (_envSoundControllerValue > 0) then
			{
				_position = [_x + TEST_Resolution/2,_y + TEST_Resolution/2,0];
				private _marker = createMarker [format ["TEST_Marker_Text_%1_%2_%3",_envSoundControllers,_x,_y],_position];
				_marker setMarkerType "DOT";
				_marker setMarkerText (str _envSoundControllerValue);

				TEST_TextMarkers pushBack _marker;
			};

//	class ColorBlack: Default
//		scope = 2;
//	class ColorGrey: Default
//		color[] = {0.5,0.5,0.5,1};
//	class ColorRed: Default
//		color[] = {0.9,0,0,1};
//	class ColorBrown: Default
//		color[] = {0.5,0.25,0,1};
//	class ColorOrange: Default
//		color[] = {0.85,0.4,0,1};
//	class ColorYellow: Default
//		color[] = {0.85,0.85,0,1};
//	class ColorKhaki: Default
//		color[] = {0.5,0.6,0.4,1};
//	class ColorGreen: Default
//		color[] = {0,0.8,0,1};
//	class ColorBlue: Default
//		color[] = {0,0,1,1};
//	class ColorPink: Default
//		color[] = {1,0.3,0.4,1};
//	class ColorWhite: Default
//		color[] = {1,1,1,1};
		};
	};
	diag_log "";
} forEach Test_EnvSoundControllers;

TEST_EnvSoundControllerUniqueValues sort true;

_highestValue = TEST_EnvSoundControllerUniqueValues select ((count TEST_EnvSoundControllerUniqueValues) - 1);
_lowestValue = TEST_EnvSoundControllerUniqueValues select 0;

diag_log ["_highestValue",_highestValue];
diag_log ["_lowestValue",_lowestValue];

_i = 0;
{
	_colorMarker = _x;
	_colorMarker setMarkerAlpha ((TEST_EnvSoundControllerValues select _i)/_highestValue);
	_i = _i + 1;
} forEach TEST_ColorMarkers;

//get all
if (false) then
{
	diag_log "";
	diag_log "getAllEnvSoundControllers";

	for "_x" from 0 to worldSize step TEST_Resolution do
	{
		for "_y" from 0 to worldSize step TEST_Resolution do
		{
			diag_log format ["%1	%2	%3",_x,_y,(getAllEnvSoundControllers [_x,_y,0])];
		};
	};
};

endLoadingScreen;

hint "Done";

//endMission "END1";