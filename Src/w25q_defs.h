/*
 * Copyright (c) 2026 Maxim Pekurin
 * Licensed under the MIT License.
 */

#ifndef W25Q_DEFS_H
#define W25Q_DEFS_H

/* --- Instructions --- */

#define W25Q_WRITE_ENABLE                       0x06U
#define W25Q_VOLATILE_SR_WRITE_ENABLE           0x50U
#define W25Q_WRITE_DISABLE                      0x04U
#define W25Q_READ_STATUS_REG_1                  0x05U
#define W25Q_READ_STATUS_REG_2                  0x35U
#define W25Q_READ_STATUS_REG_3                  0x15U
#define W25Q_WRITE_STATUS_REG_1                 0x01U
#define W25Q_WRITE_STATUS_REG_2                 0x31U
#define W25Q_WRITE_STATUS_REG_3                 0x11U
#define W25Q_ENTER_4B_ADDRESS_MODE              0xB7U // Not implemented
#define W25Q_EXIT_4B_ADDRESS_MODE               0xE9U // Not implemented
#define W25Q_READ_DATA                          0x03U
#define W25Q_READ_DATA_4B_ADDRESS               0x13U // Not implemented
#define W25Q_FAST_READ                          0x0BU
#define W25Q_FAST_READ_DTR                      0x0DU // Not implemented
#define W25Q_FAST_READ_4B_ADDRESS               0x0CU // Not implemented
#define W25Q_FAST_READ_DUAL_OUTPUT              0x3BU
#define W25Q_FAST_READ_DUAL_OUTPUT_4B_ADDRESS   0x3CU // Not implemented
#define W25Q_FAST_READ_QUAD_OUTPUT              0x6BU
#define W25Q_FAST_READ_QUAD_OUTPUT_4B_ADDRESS   0x6CU // Not implemented
#define W25Q_FAST_READ_DUAL_IO                  0xBBU
#define W25Q_FAST_READ_DUAL_IO_DTR              0xBDU // Not implemented
#define W25Q_FAST_READ_DUAL_IO_4B_ADDRESS       0xBCU // Not implemented
#define W25Q_FAST_READ_QUAD_IO                  0xEBU
#define W25Q_FAST_READ_QUAD_IO_DTR              0xEDU // Not implemented
#define W25Q_FAST_READ_QUAD_IO_4B_ADDRESS       0xECU // Not implemented
#define W25Q_SET_BURST_WITH_WRAP                0x77U
#define W25Q_SET_READ_PARAMETERS                0xC0U // Not implemented
#define W25Q_BURST_READ_WITH_WRAP               0x0CU // Not implemented
#define W25Q_BURST_READ_WITH_WRAP_DTR           0x0EU // Not implemented
#define W25Q_PAGE_PROGRAM                       0x02U
#define W25Q_PAGE_PROGRAM_4B_ADDRESS            0x12U // Not implemented
#define W25Q_PAGE_PROGRAM_QUAD_INPUT            0x32U
#define W25Q_PAGE_PROGRAM_QUAD_INPUT_4B_ADDRESS 0x34U // Not implemented
#define W25Q_SECTOR_ERASE_4KB                   0x20U
#define W25Q_SECTOR_ERASE_4KB_4B_ADDRESS        0x21U // Not implemented
#define W25Q_BLOCK_ERASE_32KB                   0x52U
#define W25Q_BLOCK_ERASE_64KB                   0xD8U
#define W25Q_BLOCK_ERASE_64KB_4B_ADDRESS        0xDCU // Not implemented
#define W25Q_CHIP_ERASE                         0xC7U
#define W25Q_SUSPEND                            0x75U
#define W25Q_RESUME                             0x7AU
#define W25Q_POWER_DOWN                         0xB9U
#define W25Q_RELEASE_POWER_DOWN                 0xABU
#define W25Q_READ_MFTR_DEVICE_ID                0x90U
#define W25Q_READ_MFTR_DEVICE_ID_DUAL_IO        0x92U
#define W25Q_READ_MFTR_DEVICE_ID_QUAD_IO        0x94U
#define W25Q_READ_UNIQUE_ID                     0x4BU
#define W25Q_READ_JEDEC_ID                      0x9FU
#define W25Q_READ_SFDP_REG                      0x5AU // Not implemented
#define W25Q_ERASE_SECURITY_REG                 0x44U
#define W25Q_PROGRAM_SECURITY_REG               0x42U
#define W25Q_READ_SECURITY_REG                  0x48U
#define W25Q_ENTER_QPI_MODE                     0x38U // Not implemented
#define W25Q_EXIT_QPI_MODE                      0xFFU // Not implemented
#define W25Q_INDIVIDUAL_LOCK                    0x36U
#define W25Q_INDIVIDUAL_UNLOCK                  0x39U
#define W25Q_READ_LOCK_STATE                    0x3DU
#define W25Q_GLOBAL_LOCK                        0x7EU
#define W25Q_GLOBAL_UNLOCK                      0x98U
#define W25Q_ENABLE_RESET                       0x66U
#define W25Q_RESET_DEVICE                       0x99U

/* --- Alternate bytes --- */

#define W25Q_CONTINUOUS_READ_MODE               0xFFU

#endif // W25Q_DEFS_H
