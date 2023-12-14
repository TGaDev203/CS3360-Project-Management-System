#ifndef OTHERFUNC_H
#define OTHERFUNC_H

#include "../Menus/SharedResource.h"

// To Store Vector All the Groups
std::vector<Group *> groups;

// To Store Vector All the Projects
std::vector<Project *> projects;

int askUserNumberOfGroups();
int askUserNumberOfProjects();
std::string askUserFileGroupsDirectory();
std::string askUserFileProjectsDirectory();

int askUserNumberOfGroups()
{
    int numGroups = 0;
    std::string numGroups_string = "";

    // ENTER NUMBER GROUPS
    std::cout << "Enter the number of groups: ";
    std::cin >> numGroups_string;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    numGroups_string = getValueAfterValidate(numGroups_string, validateID);
    numGroups = std::stoi(numGroups_string);

    std::cout << "================================================\n";

    return numGroups;
}
int askUserNumberOfProjects()
{
    int numProjects = 0;
    std::string numProjects_string = "";

    // ENTER NUMBER PROJECTS
    std::cout << "Enter the number of projects: ";
    std::cin >> numProjects_string;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    numProjects_string = getValueAfterValidate(numProjects_string, validateID);
    numProjects = std::stoi(numProjects_string);

    std::cout << "================================================\n";

    return numProjects;
}
std::string askUserFileGroupsDirectory()
{
    std::string fileGroups = "";

    std::vector<Group *> groups;

    int getfile;
    do
    {
        getfile = getFileTxtPathWindow(fileGroups);

        if (getfile == SUCCESS && isRightFile(fileGroups, GROUP_INFO_FILE))
        {
            std::cout << "Selected file path: " << fileGroups << std::endl;
        }
        else
        {
            std::cout << "Wrong file!!! Please choose the correct file." << std::endl;
        }

    } while (getfile != SUCCESS || !isRightFile(fileGroups, GROUP_INFO_FILE));

    return fileGroups;
}

std::string askUserFileProjectsDirectory()
{
    std::string fileProjects = "";

    std::vector<Project *> projects;

    int getfile;
    do
    {
        getfile = getFileTxtPathWindow(fileProjects);

        if (getfile == SUCCESS && isRightFile(fileProjects, PROJECT_INFO_FILE))
        {
            std::cout << "Selected file path: " << fileProjects << std::endl;
        }
        else
        {
            std::cout << "Wrong file!!! Please choose the correct file." << std::endl;
        }

    } while (getfile != SUCCESS || !isRightFile(fileProjects, PROJECT_INFO_FILE));

    return fileProjects;
}

#endif
