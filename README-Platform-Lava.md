#
# Copyright (C) LavaLite Contributors
#
# LavaLite Legacy Codebase (`lava_legacy`)

This repository contains the original compiled LavaLite codebase, preserved as a
foundational reference for future development. It represents the earliest
implementation of LavaLite's remote execution model, parser logic, and
system-level integrations.

Note: CVS artifacts are retained in this branch for historical completeness.
They are not used in active development.

## Key Updates

To ensure compatibility and modernization, the following changes were made:

- **Tcl Integration Fix** Replaced direct access to `Tcl_Interp` with
  `Tcl_SetResult` to comply with updated Tcl API constraints.

- **XDR Modernization** Integrated
  [`libtirpc`](https://github.com/libtirpc/libtirpc) for the new implementation of
  XDR (External Data Representation), replacing deprecated RPC headers.

- **Dynamic Linking** All third-party static libraries have been converted to
   dynamic linkage to improve portability and reduce binary size.

## Purpose of This Branch

This branch serves as:
- A historical snapshot of LavaLite’s original architecture
- A compatibility layer for legacy job formats and execution flows
- A reference point for migrating to the new modular structure in the `main` branch

 For questions, contributions, or historical curiosity, this branch remains open
 and maintained as a reference point.

**📧 lavalite@lavalite-compute.io**

## Next Steps

Development continues in the
[`main`](https://github.com/LavaLite-Compute/lavalite/tree/main) branch, where
LavaLite is being restructured with:
- A modern parser for array syntax
- Math-driven execution semantics
- Modular architecture with clean documentation

---

