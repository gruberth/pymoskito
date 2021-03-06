/** @file Controller.h
 * This file includes the different observer implementations for the two tank system.
 *
 */
#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

/**
 * @brief Class that implements an Observer.
 */
class Observer {
protected:
    double dSampleTime = 0.0;
public:
    /**
     * Sets the initial state
     * @param dInitialState
     */
    virtual void setInitialState(std::vector<double> dInitialState) = 0;

    /**
     * Sets the observation gain
     * @param dGain
     */
    virtual void setGain(std::vector<double> dGain) = 0;

    /**
     * Computes the observer output at current time step for the given tank 1 height and the voltage of the
     * pump with the euler method
     *
     * @param tank 1 height
     * @param voltage of the pump
     * @return observed values for tank 1 and 2 height
     */
    virtual std::vector<double> compute(const double &dhT1,
                                        const double &dUA) = 0;
};

#endif // OBSERVER_H
