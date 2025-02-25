#ifndef VPR_PLACE_H
#define VPR_PLACE_H

#include "vpr_types.h"

void try_place(const Netlist<>& net_list,
               const t_placer_opts& placer_opts,
               t_annealing_sched annealing_sched,
               const t_router_opts& router_opts,
               const t_analysis_opts& analysis_opts,
               t_chan_width_dist chan_width_dist,
               t_det_routing_arch* det_routing_arch,
               std::vector<t_segment_inf>& segment_inf,
               t_direct_inf* directs,
               int num_directs,
               bool is_flat);

bool placer_needs_lookahead(const t_vpr_setup& vpr_setup);

#endif
