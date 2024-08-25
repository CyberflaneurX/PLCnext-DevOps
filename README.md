# PLCnextDevops Project Instructions

This guide is for setting up an environment to develop PLCnext projects with the starter kit using Docker and VSCode.

## Installation Steps

To run Linux containers with Docker on a Windows system, WSL 2 is required. Follow the steps below to get set up:

1. **Install WSL 2 and Ubuntu 22.04**

   - Open PowerShell by typing `powershell` in the Windows search bar.
   - Run the following commands:
     ```bash
     wsl --install
     wsl --set-default-version 2
     wsl --install -d Ubuntu-22.04
     wsl --set-version Ubuntu-22.04 2
     ```
   - This will install WSL 2 and set up Ubuntu 22.04 as your default Linux distribution.

2. **Install Docker and Configure WSL 2**

   - Install Docker Desktop for Windows.
   - During installation, ensure that Docker is configured to use the WSL 2 backend.

3. **Install VSCode and Configure for Docker Use**

   - [Download and install VSCode](https://code.visualstudio.com/download).
   - Install the [Remote - Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers).

4. **Clone the PLCnextDevops Repository into Your WSL 2 Workspace**

   - Open Ubuntu terminal
   - Set up SSH keys in your WSL environment if needed. (https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account?platform=linux)
   - Clone the PLCnextDevops repository:
     ```bash
     git clone <PLCnextDevops-url>
     ```

5. **Open PLCnextDevops in VSCode Using Docker and WSL 2**
   - From the Ubuntu terminal, navigate to the cloned repository folder:
     ```bash
     cd path/to/PLCnextDevops
     code .
     ```
   - In VSCode, select the folder containing the PLCnextDevops repo and choose the option to "Reopen in Container."
   - Wait for the Docker image to build and the container to start.
   - A select workspace prompt will open navigate to PLCnext-DevOps folder.

---

# PLCNext Tasks

## Task: `plcnext_new_Project`

This task is used to create a new PLCNext PLM project. It sets up the initial project structure and prepares it for further development.

### How to Use:

1. **Open the Command Palette:** Press `Ctrl+Shift+P` in VS Code.
2. **Run the Task:** Type `Tasks: Run Task` and press `Enter`.
3. **Select `plcnext_new_Project`:** Choose the `plcnext_new_Project` task from the list.
4. **Input Project Name:** You will be prompted to enter the project name (e.g., `NewProject`).

### Task Execution:

- Creates a new project in the `src/projects` directory with the specified project name.
- Sets the target to `AXCF2152`.
- Generates the necessary code and configuration.
- Displays a completion message indicating that the new PLCNext project has been successfully created.

### Project Use:

The project is now ready for further development, such as adding components and programs.

---

## Task: `plcnext_new_program`

This task is used to create a new program within an existing PLCNext PLM project. It adds a new program to a specified component.

### How to Use:

1. **Open the Command Palette:** Press `Ctrl+Shift+P` in VS Code.
2. **Run the Task:** Type `Tasks: Run Task` and press `Enter`.
3. **Select `plcnext_new_program`:** Choose the `plcnext_new_program` task from the list.
4. **Input Project and Program Details:**
   - Enter the project name (e.g., `NewProject`).
   - Enter the component name (e.g., `MainComponent`).
   - Enter the program name (e.g., `NewProgram`).

### Task Execution:

- Navigates to the specified project directory.
- Creates a new program under the specified component.
- Generates the necessary code and configuration.
- Displays a completion message indicating that the new PLCNext program has been successfully created.

### Program Use:

The new program is now ready for further development and integration into the project.

---

## Task: `plcnext_new_component`

This task is used to create a new component within an existing PLCNext PLM project. It adds a new component to the project.

### How to Use:

1. **Open the Command Palette:** Press `Ctrl+Shift+P` in VS Code.
2. **Run the Task:** Type `Tasks: Run Task` and press `Enter`.
3. **Select `plcnext_new_component`:** Choose the `plcnext_new_component` task from the list.
4. **Input Project and Component Details:**
   - Enter the project name (e.g., `NewProject`).
   - Enter the component name (e.g., `NewComponent`).

### Task Execution:

- Navigates to the specified project directory.
- Creates a new component with the given name.
- Generates the necessary code and configuration.
- Displays a completion message indicating that the new PLCNext component has been successfully created.

### Component Use:

The new component is now ready for further development and can be used to structure your project's functionality.

---

## Task: `plcnext_build`

This task is used to build an existing PLCNext PLM project. Unlike the `plcnext_gen_build` task, this task does not regenerate the code and configuration files, so it should not be used if there have been changes to port definitions or other configurations that require regeneration.

### How to Use:

1. **Open the Command Palette:** Press `Ctrl+Shift+P` in VS Code.
2. **Run the Task:** Type `Tasks: Run Task` and press `Enter`.
3. **Select `plcnext_build`:** Choose the `plcnext_build` task from the list.
4. **Input Project Name:** You will be prompted to enter the project name (e.g., `NewProject`).

### Task Execution:

- Sets the build type to `Release`.
- Navigates to the project directory `/src/projects/<project_name>`.
- Builds the project without regenerating code and configuration.
- Deploys the project.
- Copies the generated `.pcwlx` binary file to `/home/plc/Windows_PLCNextEngineer_Libraries`.

### Project Use:

1. Navigate to the project directory `/src/projects/<project_name>`.
2. Right-click on the `.pcwlx` file and select "Download."
3. Download the `.pcwlx` file into `C:\Users\<user>\Documents\PLCnext Engineer\Libraries`.
4. The library should then appear in PLCnext Engineer.

#### Task: `plcnext_gen_build`

This task is used to build a PLCNext PLM project. It generates code, configures the project, builds it, and deploys the final binary file to a specified directory inside the Docker container.

##### How to Use:

1. **Open the Command Palette**: Press `Ctrl+Shift+P` in VS Code.
2. **Run the Task**: Type `Tasks: Run Task` and press Enter.
3. **Select `plcnext_gen_build`**: Choose the `plcnext_gen_build` task from the list.
4. **Input Project Name**: You will be prompted to enter the project name (e.g., `Hello`).
5. **Task Execution**: The task will:

   - Set the build type to `Release`.
   - Navigate to the project directory `/src/projects/<project_name>`.
   - Generate code and configuration.
   - Build and deploy the project.
   - Copy the generated `.pcwlx` binary file to `/home/plc/Windows_PLCNextEngineer_Libraries`.

6. **Project Use**
   - Navigate to the project directory `/src/projects/<project_name>`.
   - Right-click on the `.pcwlx` file and select "Download."
   - Download the `.pcwlx` file into `C:\Users\<user>\Documents\PLCnext Engineer\Libraries`.
   - The library should then appear in PLCnext Engineer.
