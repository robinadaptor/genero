// Copyright (c) 2019-2019 Robin Project
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_PARAM_H
#define BITCOIN_PARAM_H


#define BLOCK_TRANS_TIME			1526788600
#define BLOCK_TRANS_UPDATE			1526788600

#define BLOCK_TRANS_COUNT			1051200
#define BLOCK_TRANS_PREMINE_OFFSET	1
#define BLOCK_TRANS_PREMINE			BLOCK_TRANS_COUNT+BLOCK_TRANS_PREMINE_OFFSET
#define BLOCK_TRANS_STEP1_OFFSET	200
#define BLOCK_TRANS_STEP2_OFFSET	500
#define BLOCK_TRANS_STEP3_OFFSET	600
#define BLOCK_TRANS_STEP4_OFFSET	1000
#define BLOCK_TRANS_STEP1			BLOCK_TRANS_PREMINE+BLOCK_TRANS_STEP1_OFFSET
#define BLOCK_TRANS_STEP2			BLOCK_TRANS_STEP1+BLOCK_TRANS_STEP2_OFFSET
#define BLOCK_TRANS_STEP3			BLOCK_TRANS_STEP2+BLOCK_TRANS_STEP3_OFFSET
#define BLOCK_TRANS_STEP4			BLOCK_TRANS_STEP3+BLOCK_TRANS_STEP4_OFFSET

#define RWD_PREMINE					3000000
#define RWD_PER_BLOCK				20
#define RWD_BEFORE_RADIO			0.75
#define RWD_AFTER_STEP1_RADIO		0.2			// 200 blocks
#define RWD_AFTER_STEP2_RADIO		0.4			// 500 blocks	
#define RWD_AFTER_STEP3_RADIO		0.6			// 600 blocks	
#define RWD_AFTER_STEP4_RADIO		0.8			// 1000 blocks	
#define RWD_AFTER_STEP5_RADIO		1			
#define RWD_AFTER_STEP6_RADIO		0.5			// node < 10
#define RWD_AFTER_STEP7_RADIO		0.25		// node < 5
#define RWD_AFTER_STEP8_RADIO		0			// node = 0

#define MASTERNODE_COUNT_LVL1		10
#define MASTERNODE_COUNT_LVL2		5
#define MASTERNODE_COUNT_LVL3		0

#define PEER_PROTO_VERSION_BEFORE_ENFORCEMENT	70714
#define PEER_PROTO_VERSION_AFTER_ENFORCEMENT	70714

const int nFlrProtocol[0] = {};		// set banning protocol

#endif // BITCOIN_PARAM_H
