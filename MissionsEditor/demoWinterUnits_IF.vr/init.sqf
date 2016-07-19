//sleep 1;

player setCaptive true;

{
	_x setCaptive true;
	_x disableAI "TARGET";
	_x disableAI "MOVE";
	_x disableAI "CHECKVISIBLE";
	_x disableAI "COVER";
	_x disableAI "AUTOCOMBAT";
	_x disableAI "PATH";
}
forEach (allUnits - [player]);

player enableFatigue false;