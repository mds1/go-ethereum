#include<stdint.h>
void init();
uint64_t new_circuit_capacity_checker();
void reset_circuit_capacity_checker(uint64_t id);
uint8_t apply_tx(uint64_t id, char *tx_traces);
int64_t apply_block(uint64_t id, char *block_traces);