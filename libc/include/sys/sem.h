#ifndef _SYS_SEM_H
#define _SYS_SEM_H      1

#define __need_size_t
#include <stddef.h>

/* Get common definition of System V style IPC.  */
#include <sys/ipc.h>

/* Get system dependent definition of `struct semid_ds' and more.  */
#include <linux/sem.h>

/* The following System V style IPC functions implement a semaphore
 *    handling.  The definition is found in XPG2.  */

__BEGIN_DECLS

extern int semctl (int __semid, int __semnum, int __cmd, ...);
extern int semget (key_t __key, int __nsems, int __semflg);
extern int semop (int __semid, struct sembuf *__sops, size_t __nsops);

__END_DECLS

#endif /* sys/sem.h */
