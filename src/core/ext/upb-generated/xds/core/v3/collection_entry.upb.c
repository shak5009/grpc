/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/collection_entry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/core/v3/collection_entry.upb.h"
#include "google/protobuf/any.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "xds/core/v3/resource_locator.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub xds_core_v3_CollectionEntry_submsgs[2] = {
  {.submsg = &xds_core_v3_CollectionEntry_InlineEntry_msginit},
  {.submsg = &xds_core_v3_ResourceLocator_msginit},
};

static const upb_MiniTable_Field xds_core_v3_CollectionEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_CollectionEntry_msginit = {
  &xds_core_v3_CollectionEntry_submsgs[0],
  &xds_core_v3_CollectionEntry__fields[0],
  UPB_SIZE(8, 16), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub xds_core_v3_CollectionEntry_InlineEntry_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field xds_core_v3_CollectionEntry_InlineEntry__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 40), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_CollectionEntry_InlineEntry_msginit = {
  &xds_core_v3_CollectionEntry_InlineEntry_submsgs[0],
  &xds_core_v3_CollectionEntry_InlineEntry__fields[0],
  UPB_SIZE(24, 48), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &xds_core_v3_CollectionEntry_msginit,
  &xds_core_v3_CollectionEntry_InlineEntry_msginit,
};

const upb_MiniTable_File xds_core_v3_collection_entry_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

