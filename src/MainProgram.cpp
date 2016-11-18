#include "WPILib.h"
#include "Autonomous/AutonomousController.h"
#include "Controllers/DriveController.h"
#include "Controllers/SuperstructureController.h"
#include "Logger/Debugging.h"
#include "Logger/Ini.h"
#include "Logger/Logger.h"
#include "Vision/CameraController.h"
#include "ControlBoard.h"
#include "RobotModel.h"

class MainProgram : public IterativeRobot {
	// Declares variables
	RobotModel *robot;
	ControlBoard *controlBoard;
	DriveController *driveController;
	SuperstructureController *superstructureController;
	AutonomousController *autonomousController;
	CameraController *cameraController;
	LiveWindow *liveWindow;

	// Timer variables
	double currTimeSec;
	double lastTimeSec;
	double deltaTimeSec;

public:
	MainProgram() {
		robot = new RobotModel();
		controlBoard = new ControlBoard();		// to put inputs soon
		driveController = new DriveController();
		superstructureController = new SuperstructureController();
		autonomousController = new AutonomousController();
		cameraController = new CameraController();
		liveWindow = LiveWindow::GetInstance();

		currTimeSec = 0.0;
		lastTimeSec = 0.0;
		deltaTimeSec = 0.0;
	}

private:
	void RobotInit() {

	}

	void AutonomousInit() {

	}

	void AutonomousPeriodic() {

	}

	void TeleopInit() {

	}

	void TeleopPeriodic() {

	}

	void TestPeriodic() {

	}
};

START_ROBOT_CLASS(MainProgram)
