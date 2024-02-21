#include <iostream>
#include <vector>

using namespace std;

class Observer {
public:
	virtual void onEvent(int event) = 0;
};

class Subject {

	vector <Observer*> observers;

public:

	void addObserver(Observer* observer) {
		observers.push_back(observer);
	}

	void notify(int event) {
		for (Observer* observer : observers) {
			observer->onEvent(event);
		}
	}
	};

class Achievments : public Observer {
public:
	void onEvent(int event) override {
		if (event == EVENT_START_FALLING) {
			cout << "Event unlocked! Falling " << endl;
		}
	}

};

class Physics {
public:
	Subject subject;

	void updateEntity(Entity& entity) {
		bool wasOnSurface = entity.isOnSurface();
		entity.accelerate(GRAVITY);
		entity.update();
		if (wasOnSurface && !entity.isOnSurface()) {
			subject.notify(EVENT_START_FALL);
		}
	}
	}
};



int main() 
{
	Achievments achievements;
	Physics physics;

	physics.subject.addObserver(&achievements);

	Entity entity;
	physics.updateEntity(entity);


	return 0;
}
