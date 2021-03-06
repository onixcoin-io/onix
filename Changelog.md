
# Onix Core Changelog

This document describes breaking changes between Onix releases for both RPC APIs and for blockchain consensus.

## [0.2.1] - 2022-01-19

- Updated testnet params, chaindata and checkpoints.
- Added `getcontractcode` RPC API method.

## [0.2.0] - 2021-15-15

- Fork inflicted on block #54786 to undo the steal of 2m+ coins after hack at Blockchain Financial,  
  the platform where we are integrating services and directing the GRWI/ONIX swap.  
  More information about this on:
  - [Announcement of the intrusion at Blockchain Financial](https://blockchainfinancial.com/instrussion-dec-2021)
  - [Announcement on the Onix website regarding the decision that led to this fork](https://onixcoin.io/important-announcement)
- Bumped protocol and wallet version.
- Updated minimumchainwork and checkpoints.


## [0.1.2] - 2021-12-02

- Removed `super staking` enabled by default.
- Kept `log events` enabled by default.
- Fixed disabled checkboxes for `log events` and `super staking` on the options dialog: 
  they can be toggled on/off now.
- Removed pruning message when starting from scratch.
- Added labels to address selectors on the Delegation and SuperStaker addition dialogs.
- Added labels to sender address selectors on the smart contracts pages.  
  **Note:** labels are added as soon as the first input at the top of each page is modified.

**Notes:**

- Since `super staking` was previously enabled by default, it is most likely that it will be
  kept on after applying this update. To make sure the options are properly set, you should
  open the options dialog and click on the "Reset options" button.  
  If you want to proceed with this, you might get an error.  
  [Please check this issue](https://github.com/onixcoin-io/onix/issues/2) for a workaround.

## [0.1.1] - 2021-11-03

- Updated `minimumchainwork`
- Updated `chainTXData`
- Fixed wrong GitHub repository name

## [0.1.0] - 2021-10-31

Initial release.

**Notes:**

- `log events` is enabled by default.
- `super staking` is enabled by default.

