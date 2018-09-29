#ifndef DriveForward_H
#define DriveForward_H

#include "../CommandBase.h"

class DriveForward : public CommandBase {
private:
double setpoint;
public:
	DriveForward(double distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForward_H
