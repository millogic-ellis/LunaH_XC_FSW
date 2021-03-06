/*
 * lunah_utils.h
 *
 *  Created on: Jun 22, 2018
 *      Author: IRDLAB
 */

#ifndef SRC_LUNAH_UTILS_H_
#define SRC_LUNAH_UTILS_H_

#include <xtime_l.h>
#include <xuartps.h>

// prototypes
void InitStartTime(void);
XTime GetLocalTime(void);
int GetNeuronTotal(void);
int report_SOH(XTime local_time, int i_neutron_total, XUartPs Uart_PS);
int CheckForSOH(void);


// lunah_config structure
typedef struct {
    int ConfigFormatVer;    // usedful?

	// instrument parameters
	int TriggerThreshold;
	float EnergyCut[2];
	float PsdCut[2];
	float WideEnergyCut[2];
	float WidePsdCut[2];
	int HighVoltageValue[4];
	int IntegrationBaseline;
	int IntegrationShort;
	int IntegrationLong;
	int IntegrationFull;
	float ECalSlope;
	float EcalIntercept;
	int ConfigChecksum;         // needed?
} CONFIG_STRUCT_TYPE;


#endif /* SRC_LUNAH_UTILS_H_ */
