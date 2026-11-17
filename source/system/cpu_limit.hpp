#pragma once

// Optimized CPU limits for better stability on old 3DS
// Old 3DS gets MAXIMUM CPU time since it only has one core
#define NEW_3DS_CPU_LIMIT 50
#define OLD_3DS_CPU_LIMIT 80
#define CPU_LIMIT (var_is_new3ds ? NEW_3DS_CPU_LIMIT : OLD_3DS_CPU_LIMIT)

// Additional CPU limit when waiting for network
// Reduced for old 3DS to minimize context switching overhead
#define NEW_3DS_ADDITIONAL_CPU_LIMIT 20
#define OLD_3DS_ADDITIONAL_CPU_LIMIT 25
#define ADDITIONAL_CPU_LIMIT (var_is_new3ds ? NEW_3DS_ADDITIONAL_CPU_LIMIT : OLD_3DS_ADDITIONAL_CPU_LIMIT)

void add_cpu_limit(int limit);

// there must have been corresponding adding
void remove_cpu_limit(int limit);

int get_cpu_limit();
