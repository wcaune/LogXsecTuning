# LogXSecTuning
Dairy of Neutrino Cross-Section Tuning 


### Aug 13, 2024 
I installed NUISANCE and NuSystematics by following [DirtTwo](https://twiki.cern.ch/twiki/bin/view/Main/DirtTwo) wiki.  <br />
After that, each time I logged in, I did source the [qidong.sh](qidong.sh) file.

### DUNE flux histogram
The neutrino flux for DUNE can be found [here](https://cernbox.cern.ch/files/link/public/smRZIpiWzFAaD5n?tiles-size=1&items-per-page=100&view-mode=resource-table).


## GENIE only comparison: AR23_20i_00_000 vs.  N24_20i_02_11b
To generate flat root tree sample with nuisflat, take numu on Carbon-12 as an example:
```bash
bash makeCCQE.sh 
PrepareGENIE -i 14_1000060120\[1.0\]_618.root -f $(nuis flux NOvA_ND) -t 1000060120[1.0] -o CC_C12prep.root
nuisflat -i GENIE:CC_C12prep.root -o vAR23_C12QE.root
```

# Notes on Mini Production 6.2
We have use N24_20i_02_11b as the genie tune tag for Mini Production 6.2 nominal sample, additionally we also have mean free path down samples.
## Nominal FHC genie level only files
The sample directory is 
```bash
/pnfs/nova/production/genie/R25-02-27-prod6genie.b/nd/N24_20i_02_11b/000120/12000/   
```
and samweb dataset name is
```bash
"defname:prod_genie_R25-02-27-prod6genie.b_nd_genie_N24_20i_02_11b_nonswap_fhc_nova_v08_full_v1_miniprod6-2_geniephyopt_nominal"
```

## Nominal RHC genie level only samples
The root file directory is 
```bash
/pnfs/nova/production/genie/R25-02-27-prod6genie.b/nd/N24_20i_02_11b/000121/12150/
```
and the SAMWEB dataset is 
```bash
"defname:prod_genie_R25-02-27-prod6genie.b_nd_genie_N24_20i_02_11b_nonswap_rhc_nova_v08_full_v1_miniprod6-2_geniephyopt_nominal"
```

## Data management
NOvA is still using the SamWeb to fetch dataset. So I borrowed the python script([samweb_listing.py](samweb_listing.py)) from ProtoDUNE to access defname files.

## Workflow
Since `submit_nova_art.py` didn't work well during the validation period for a lot of reasons, I had to use bash script to run the GENIE file one by one.

