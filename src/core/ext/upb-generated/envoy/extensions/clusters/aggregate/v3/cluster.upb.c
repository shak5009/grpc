/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/clusters/aggregate/v3/cluster.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/extensions/clusters/aggregate/v3/cluster.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field envoy_extensions_clusters_aggregate_v3_ClusterConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit = {
  NULL,
  &envoy_extensions_clusters_aggregate_v3_ClusterConfig__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit,
};

const upb_MiniTable_File envoy_extensions_clusters_aggregate_v3_cluster_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

