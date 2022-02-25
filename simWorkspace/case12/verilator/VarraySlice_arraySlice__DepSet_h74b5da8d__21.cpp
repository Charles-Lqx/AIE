// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__235(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__235\n"); );
    // Body
    vlSelf->__PVT___zz_when_ArraySlice_l234_7 = ((0x40U 
                                                  & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(7U) 
                                                         * (IData)(vlSelf->__PVT__bReg)))))
                                                  ? 
                                                 ((0x20U 
                                                   & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__PVT__bReg)))))
                                                   ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                   : 
                                                  ((0x10U 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__PVT__bReg)))))
                                                    ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                    : 
                                                   ((8U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__PVT__bReg)))))
                                                     ? 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_78_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_77_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_76_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_75_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_74_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_73_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_72_io_occupancy))))
                                                     : 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_71_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_70_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_69_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_68_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_67_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_66_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_65_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_64_io_occupancy)))))))
                                                  : 
                                                 ((0x20U 
                                                   & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__PVT__bReg)))))
                                                   ? 
                                                  ((0x10U 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__PVT__bReg)))))
                                                    ? 
                                                   ((8U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__PVT__bReg)))))
                                                     ? 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_63_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_62_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_61_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_60_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_59_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_58_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_57_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_56_io_occupancy))))
                                                     : 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_55_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_54_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_53_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_52_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_51_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_50_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_49_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_48_io_occupancy)))))
                                                    : 
                                                   ((8U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__PVT__bReg)))))
                                                     ? 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_47_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_46_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_45_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_44_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_43_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_42_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_41_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_40_io_occupancy))))
                                                     : 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_39_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_38_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_37_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_36_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_35_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_34_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_33_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_32_io_occupancy))))))
                                                   : 
                                                  ((0x10U 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__PVT__bReg)))))
                                                    ? 
                                                   ((8U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__PVT__bReg)))))
                                                     ? 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_31_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_30_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_29_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_28_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_27_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_26_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_25_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_24_io_occupancy))))
                                                     : 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_23_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_22_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_21_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_20_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_19_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_18_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_17_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_16_io_occupancy)))))
                                                    : 
                                                   ((8U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__PVT__bReg)))))
                                                     ? 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_15_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_14_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_13_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_12_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_11_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_10_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_9_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_8_io_occupancy))))
                                                     : 
                                                    ((4U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__PVT__bReg)))))
                                                      ? 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_7_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_6_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_5_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_4_io_occupancy)))
                                                      : 
                                                     ((2U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__PVT__bReg)))))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_3_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_2_io_occupancy))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__PVT__bReg)))))
                                                        ? (IData)(vlSelf->__PVT__fifoGroup_1_io_occupancy)
                                                        : (IData)(vlSelf->__PVT__fifoGroup_0_io_occupancy))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__306(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__306\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_35__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_36__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_36__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_36__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_37__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_37__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_37__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_38__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_38__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_38__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_39__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_39__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_39__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_40__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_40__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_40__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_41__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_41__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_41__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_42__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_42__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_42__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_43__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_43__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_43__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_44__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_44__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_44__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_45__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_45__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_45__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_46__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_46__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_46__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_47__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_47__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_47__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_48__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_48__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_48__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_49__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_49__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_49__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_50__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_50__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_50__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_51__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_51__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_51__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_52__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_52__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_52__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_53__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_53__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_53__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_54__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_54__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_54__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_55__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_55__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_55__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_56__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_56__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_56__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_57__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_57__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_57__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_58__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_58__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_58__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_59__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_59__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_59__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_60__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_60__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_60__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_61__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_61__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_61__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_62__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_62__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_62__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_63__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_63__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_63__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_64__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_64__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_64__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_65__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_65__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_65__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_66__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_66__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__317(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__317\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_0_payload 
        = ((0x40U & (IData)(vlSelf->__PVT__selectReadFifo_0))
            ? ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__318(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__318\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_0_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT__selectReadFifo_0))
            ? ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_1_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__319(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__319\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_2_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_3_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__320(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__320\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_4_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
    vlSelf->__PVT___zz_outputStreamArrayData_5_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}
