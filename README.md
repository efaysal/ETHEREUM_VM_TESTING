# ETHEREUM_VM_TESTING

A C++ coding of N ( the next valid instruction position in the
code, skipping the data of a PUSH instruction) ,  DJ ( the  JUMPDEST location or its pc)  and Y ( All nstruction locations without data following PUSH instructions)

Jump Destination Validity D is mainly equal to DJ(0,opcodes). 

N is an important counting process recursively used by DJ and Y. The recusivity was handled by Lambda feature of C++. 

Opcodes are addressed at byte level including the data following PUSHs.
