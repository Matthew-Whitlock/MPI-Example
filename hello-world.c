#include <mpi.h>

int main(int argc, char** argv){
    //Initialize the MPI environment
    MPI_Inint(NULL,NULL);

    //Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    //Get the name of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, $world_rank);

    //Print off a hello world message
    printf("Hello world from processor %d\n", world_rank);

    //Finalize the MPI environment
    MPI_Finalize();
}
