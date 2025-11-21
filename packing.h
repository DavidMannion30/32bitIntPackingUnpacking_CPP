#include <cstdint>
#pragma once


uint32_t packed (uint8_t exchange_id, uint8_t message_type, uint16_t order_id);

void unpack(uint32_t packed, 
            uint8_t &exchange_id, 
            uint8_t &message_type,
            uint16_t &order_id);
