/**
 *
 * \file HightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 1-25-2022 04:53 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HightMotor.h"


/**
 *
 * Runnable HightMotor_move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHightMotor_Move
 *
 */

void HightMotor_move (StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	status = Rte_Call_rpIOSetHeight_IOSetForward();
	status = Rte_Call_rpIOSetHeight_IOSetReverse();
	
}

