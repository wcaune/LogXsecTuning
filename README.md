# LogXSecTuning
Dairy of Neutrino Cross-Section Tuning 


### Aug 13, 2024 
I installed NUISANCE and NuSystematics by following [DirtTwo](https://twiki.cern.ch/twiki/bin/view/Main/DirtTwo) wiki.  <br />
After that, each time I logged in, I did source the [qidong.sh](qidong.sh) file.

### DUNE flux histogram
The neutrino flux for DUNE can be found [here](https://cernbox.cern.ch/files/link/public/smRZIpiWzFAaD5n?tiles-size=1&items-per-page=100&view-mode=resource-table).


## GENIE only comparison: AR23_20i_00_000 vs.  N24_20i_02_11b
To generate flat root tree sample with nuisflat:
```bash
bash makeCCQE.sh 
PrepareGENIE -i 14_1000060120\[1.0\]_618.root -f $(nuis flux NOvA_ND) -t 1000060120[1.0] -o CC_C12prep.root
nuisflat -i GENIE:CC_C12prep.root -o vAR23_C12QE.root
```
