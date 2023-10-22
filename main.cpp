//#include "./GUI/Windows/GetFileWindow.h"
#include "./GUI/ValidateOS.h"
#include "./Functions/Display_Func.h"
#include "./Validate/ValidateRegex.h"
#include "./Validate/ValidateFunc.h"
#include "./Functions/Extract_Data_Func.h"
#include "./Functions/Other_Func.h"
#include "./Functions/Group_Func.h"
#include "./Functions/Project_Func.h"
#include "./src/include/json.hpp"
//#include <sqlite3.h>
#include <cstring>

using json = nlohmann::json;

int main(int argc, char const *argv[])
{
    //? To Store numbers of Groups AND PROJECTS
    std::vector<Group *> groups;
    std::vector<Project *> projects;

    // int groups_size = askUserNumberOfGroups();
    // groups = std::vector<Group*>(groups_size);
    // for (int group_index = 0; group_index < groups_size; group_index++)
    // {
    //     groups[group_index] = inputGroupInfo(group_index);
    // }

    // int projects_size = askUserNumberOfProjects();
    // projects = std::vector<Project*>(projects_size);
    // for (int project_index = 0; project_index < projects_size; project_index++)
    // {
    //     projects[project_index] = inputProjectInfo(project_index);
    // }
    // saveProjectsInfo(&projects, "OutputFiles/ProjectInfo.txt" );
    

    // extractGroupInfoFile(&groups, "InputFiles/GroupInfo.txt");

    // for (size_t index = 0; index < groups.size(); index++)
    // {
    //     if (groups[index] != nullptr)
    //     {
    //         std::cout << groups[index] << std::endl;
    //     }
    // }

    // Date *date = new Date(10, 12, 2003);
    // Project *project = new Project("Hello World", date);
    // project->addSubmissionDate(4, date);

    // Date *new_date = new Date(30, 12, 2004);
    // project->addSubmissionDate(10, new_date);

    // projects.push_back(project);
    // // std::cout << project << std::endl;

    // displayTableTest(&groups, &projects);

    // std::ifstream fileObj("test.json");
    // json data = json::parse(fileObj);

    // std::cout << data["happy"] << std::endl;
    // sqlite3 *DB;
    // int exit = 0;
    // exit = sqlite3_open("C:\\Users\\User\\OneDrive - Hanoi University of Science and Technology\\Desktop\\shows.db", &DB);

    // if (exit)
    // {
    //     std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
    //     return (-1);
    // }
    // else
    //     std::cout << "Opened Database Successfully!" << std::endl;
    // sqlite3_close(DB);

    // if (std::strcmp(OS_NAME, "Windows") == 0)
    // {
    //     while (true)
    //     {
    //         std::string filePath = getFileTxtPathWindow();
    //         if (isRightFile(filePath, 1))
    //         {
    //             std::cout << "Right File" << std::endl;
    //             break;
    //         }
    //         else
    //         {
    //             std::cerr << "Wrong File!!!" << std::endl;
    //         }
    //     }
    // }

    return 0;
}
