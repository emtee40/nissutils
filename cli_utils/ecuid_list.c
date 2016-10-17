

#include <stdbool.h>
#include <stdint.h>

#include "ecuid_list.h"
#include "stypes.h"


/* export from master list */

const struct ecuid_klist_t ecuid_list[] = {
	{"1EA1A", 0x917B43A8},
	{"1EA3A", 0x917B43A8},
	{"1FC6A", 0xC6E19CF0},
	{"1KA6A", 0xE5D097FC},
	{"1KE9C", 0xE5D097FC},
	{"1KN0B", 0x412CF359},
	{"1NA0A", 0x8FFD3C82},
	{"1NA8C", 0x8FFD3C82},
	{"3JV9B", 0xD2BD85E9},
	{"5Y006", 0x88733BA0},
	{"5Y702", 0x5414CDA6},
	{"5Y724", 0x5414CDA6},
	{"6Y30.", 0x5414CDA6},
	{"6Z68A", 0x93B645A1},
	{"7S...", 0xAD12D93F},
	{"7Y001", 0x7B472BD1},
	{"7Y210", 0xEED9A107},
	{"8U023", 0xE091912E},
	{"8U90.", 0x9851EB85},
	{"8U92A", 0x9851EB85},
	{"8W81A", 0xC6E19CF0},
	{"8Y72A", 0x422DF45A},
	{"9HA7.", 0xE5D097FC},
	{"9HP7B", 0x816C3398},
	{"9J411", 0x3C24EB50},
	{"9J416", 0x3C24EB50},
	{"AC010", 0x705A2287},
	{"AC011", 0x705A2287},
	{"AC200", 0x705A2287},
	{"AC3..", 0xEED9A107},
	{"AC4..", 0xEED9A107},
	{"AC700", 0xEED9A107},
	{"AC710", 0xEC5B98DE},
	{"AC800", 0xEED9A107},
	{"AC810", 0xEC5B98DE},
	{"AC815", 0xEED9A107},
	{"AG920", 0x6BD9175D},
	{"AL500", 0x3E29F056},
	{"AM604", 0x5414CDA6},
	{"AM607", 0x705A2287},
	{"AM702", 0x705A2287},
	{"AM703", 0x705A2287},
	{"AM905", 0xED19DF45},
	{"AMKN1", 0x3722E94F},
	{"AU40B", 0xBE8298AC},
	{"AV722", 0xBAA56CD1},
	{"BN915", 0xBAA56CD1},
	{"CD0..", 0x705A2287},
	{"CD1..", 0x705A2287},
	{"CD4..", 0xED19DF45},
	{"CD700", 0x7B472BD1},
	{"CD800", 0x7B472BD1},
	{"CE400", 0x705A2287},
	{"CE405", 0x705A2287},
	{"CE860", 0x7B472BD1},
	{"CE865", 0x7B472BD1},
	{"CE8..", 0xEED9A107},
	{"CF0..", 0xEED9A107},
	{"CF170", 0x7B472BD1},
	{"CF180", 0x7B472BD1},
	{"CF1..", 0xEED9A107},
	{"CF205", 0xEC5B98DE},
	{"CF210", 0xEC5B98DE},
	{"CF2..", 0xEC5B98DE},
	{"CF40C", 0x634D157A},
	{"CF40D", 0x3722E94F},
	{"CF41B", 0x634D157A},
	{"CF41E", 0x634D157A},
	{"CF42C", 0x3722E94F},
	{"CF43D", 0x634D157A},
	{"CF44A", 0x634D157A},
	{"CF44D", 0x3722E94F},
	{"CF90A", 0x422DF45A},
	{"CF91A", 0x422DF45A},
	{"CG060", 0x705A2287},
	{"CG767", 0x0E7D44A9},
	{"CL1..", 0xEED9A107},
	{"CL70A", 0x3722E94F},
	{"CL81A", 0x3B26EC52},
	{"CM30B", 0x3722E94F},
	{"CM31C", 0x634D157A},
	{"CM32A", 0x3722E94F},
	{"CM32A", 0x3722E94F},
	{"CM41C", 0x634D157A},
	{"CM4..", 0x3722E94F},
	{"CS500", 0x0FF9C026},
	{"EA...", 0xEED9A107},
	{"EC80A", 0xC6E19CF0},
	{"EC82A", 0xC6E19CF0},
	{"EC87A", 0xC6E19CF0},
	{"EG03E", 0xEED9A107},
	{"EH010", 0x7C672F93},
	{"EH115", 0xEED9A107},
	{"EJ30A", 0xCAB57DE1},
	{"EJ90A", 0xAE9961C5},
	{"EL19A", 0xC6E19CF0},
	{"EL52D", 0xC6E19CF0},
	{"EM62B", 0xC6E19CF0},
	{"EM63A", 0xC6E19CF0},
	{"EQ910", 0xBAA56CD1},
	{"ET81A", 0xE5D097FC},
	{"EV...", 0x8FFD3C82},
	{"JA90C", 0xE5D097FC},
	{"JB10D", 0x9F8A52B7},
	{"JB11D", 0x9F8A52B7},
	{"JK6..", 0x8FFD3C82},
	{"JK75E", 0x9E8950B5},
	{"JK77D", 0x9E8950B5},
	{"JK80C", 0x8FFD3C82},
	{"JK91B", 0x9E8950B5},
	{"JK92B", 0x9E8950B5},
	{"TK405", 0xED19DF45},
	{"VC628", 0x211CE348},
	{"VC85A", 0x211CE348},
	{"VD70A", 0x211CE348},
	{"Z31M2", 0xED19DF45},
	{"ZB010", 0x3C24EB50},
	{"ZB605", 0x3C24EB50},
	{"ZC...", 0x7C672F93},
	{"ZD89A", 0x93B645A1},
	{"ZE05B", 0x7F6A3297},
	{"ZE97B", 0xE5D097FC},
	{"ZH0..", 0x8CF9387E},
	{"ZH1..", 0x7C672F93},
	{"ZH20A", 0x7C672F93},
	{"ZH3..", 0x4D38FE64},
	{"ZH5..", 0x3B26EC52},
	{"ZJ0..", 0x3823EA50},
	{"ZJ5..", 0x7F6A3297},
	{"ZN30A", 0x9F8A52B7},
	{"ZN31A", 0x9F8A52B7},
	{"ZP1..", 0x3722E94F},
	{"ZP3..", 0x3722E94F},
	{"ZP5..", 0xC02E6CB2},
	{"ZQ03E", 0xF0DBA309},
	{"ZQ05B", 0xD3BE86EA},
	{"ZQ11E", 0xF0DBA309},
	{"ZR00B", 0xF0DBA309},
	{"ZR00E", 0xF0DBA309},
	{"ZR02E", 0xF0DBA309},
	{"ZR05E", 0xF0DBA309},
	{"ZR11B", 0xD3BE86EA},
	{"ZR12B", 0xD3BE86EA},
	{"ZR15B", 0xD3BE86EA},
	{"ZR16B", 0xD3BE86EA},
	{"ZR26B", 0xF0DBA309},
	{"ZR32B", 0xD3BE86EA},
	{"ZR35B", 0xD3BE86EA},
	{"ZS08A", 0x3621E84E},
	{"ZT09C", 0x1701C82E},
	{"ZT28B", 0x1701C82E},
	{"ZT28D", 0x1701C82E},
	{"ZX56A", 0xE5D097FC},
	{"", 0x0}
	};


/* calculate difference between 2 ECUIDs ; 0 is identical , 1 is almost identical etc */

static int ecuid_calcdiff(const char *ecuid, const char *item) {
	int diff = 5;
	int idx;
#if 0
	/* algo 1 : stop at first different char, left-to-right. */
	for (idx=0; idx <= 4; idx += 1) {
		if (ecuid[idx] != item[idx]) break;
		diff -= 1;
	}
	return diff;
#endif
#if 0
	/* algo 2 : count different chars */
	/* matching only the last chars gives a good score here but doesn't correlate well with keys */
	for (idx=0; idx <= 4; idx += 1) {
		if (ecuid[idx] == item[idx]) diff -= 1;
	}
	return diff;
#endif
#if 0
	/* algo 3 : weighted algo 2, index=0 is more important */
	/* interesting, but no wildcards */
	diff = 0;
	int weight = 5;
	for (idx=0; idx <= 4; idx += 1, weight -= 1) {
		if (ecuid[idx] != item[idx]) diff += weight;
	}
	return diff / 3;
#endif
#if 0
	/* algo 4 : find first diff left-to-right, wildcards count as identical */
	for (idx=0; idx <= 4; idx += 1) {
		if (	(ecuid[idx] != item[idx]) &&
			(ecuid[idx] != '.')) {
			break;
		}
		diff -= 1;
	}
	return diff;
#endif
#if 1
	/* algo 5 : weighted comparison, index=0 is more important, wildcards count for less than identical chars */
	diff = 0;
	int weight = 5;
	for (idx=0; idx <= 4; idx += 1, weight -= 1) {
		if (ecuid[idx] == '.') {
			diff += (weight / 2);
			continue;
		}
		if (ecuid[idx] != item[idx]) diff += weight;
	}
	return diff;
#endif
}




void ecuid_getkeys(const char *ECUID, u32 *key_candidates, int *keyc_dists, unsigned candidates) {
	
	#define MAXDIST 100
	int i;

	for (i = 0; i < candidates; i++) {
		key_candidates[i] = 0;
		keyc_dists[i] = MAXDIST;
	}



	//const char spacing[]="      ";
	for (i=0; ecuid_list[i].s27k != 0; i++) {
		int dist = ecuid_calcdiff(ECUID, ecuid_list[i].ecuid);
		//printf("%s\t%.*s%d\n", ecuid_list[i].ecuid, dist, spacing, dist);


		//find the first slot with the same key and a worse distance
		//check if key already in the candidate list
		bool already_there = 0;
		int loopc;
		for (loopc = 0; loopc < candidates; loopc += 1) {
			int idxmod = loopc;

			if (key_candidates[idxmod] == ecuid_list[i].s27k) {
				already_there = 1;
				//already in list: better distance?
				if (dist < keyc_dists[idxmod]) {
					keyc_dists[idxmod] = dist;
				}
				break;
			}
		}
		//else, replace the slot with the worse distance
		if (!already_there) {
			int maxdist = 0;
			int maxdist_idx = 0;
			//find worse distance
			for (loopc = 0; loopc < candidates; loopc += 1) {
				int idxmod = loopc;
	
				if (keyc_dists[idxmod] > maxdist) {
					maxdist = keyc_dists[idxmod];
					maxdist_idx = idxmod;
				}
			}
			
			key_candidates[maxdist_idx] = ecuid_list[i].s27k;
			keyc_dists[maxdist_idx] = dist;
		}
	}
}