/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Can
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_DrvGeneralTypes.h
 *   Generation Time: 2021-04-09 15:46:07
 *           Project: S32K144_Start - Version 1.0
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined(CAN_DRVGENERALTYPES_H)
#define CAN_DRVGENERALTYPES_H

/* -----------------------------------------------------------------------------
    Types
 ----------------------------------------------------------------------------- */

/* CAN416, CAN065_Conf */
typedef VAR(uint16, TYPEDEF) Can_IdType;             /* PRQA S 0850 */ /* MD_MSR_19.8 */

/* CAN429 */
typedef VAR(uint8, TYPEDEF) Can_HwHandleType;                 /* PRQA S 0850 */ /* MD_MSR_19.8 */
typedef VAR(sint16, TYPEDEF) Can_SignedHwHandleType;           /* PRQA S 0850 */ /* MD_MSR_19.8 */

typedef P2VAR(uint8, TYPEDEF, CAN_APPL_VAR) Can_SduPtrType;   /* PRQA S 0850 */ /* MD_MSR_19.8 */

/* CAN415 */
typedef struct Can_PduTypeTag
{
  Can_IdType id;
  uint8 length;
  Can_SduPtrType sdu;
  PduIdType swPduHandle;
} Can_PduType;

/* CAN417 */
typedef enum {
  CAN_T_START = 0,
  CAN_T_STOP,
  CAN_T_SLEEP,
  CAN_T_WAKEUP
} Can_StateTransitionType;

/* CAN039 */
typedef enum {
  CAN_NOT_OK = 0,
  CAN_OK = 1,
  CAN_NOT_SUPPORTED = 3,
  CAN_REQUESTED = 4
} Can_ReturnType;

/* CAN496 */
typedef struct Can_HwTypeTag
{
  Can_IdType CanId;
  Can_HwHandleType Hoh;
  uint8 ControllerId;
} Can_HwType;


#endif /* CAN_DRVGENERALTYPES_H */
 

