# Dockerfile

# Use the official Bazel image as a base image
FROM bazel:latest

# Install additional dependencies
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    cmake \
    gdb \
    git

# Set the default shell to bash
SHELL ["/bin/bash", "-c"]

# Set up a non-root user
ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Create the user
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && chown -R $USERNAME:$USERNAME /home/$USERNAME

# Switch to the non-root user
USER $USERNAME

# Set the working directory to the user's home directory
WORKDIR /home/$USERNAME

# Clone your C++ project or add your project files here
# Example: RUN git clone https://github.com/yourusername/yourcppproject.git

# Set the entry point to an interactive bash shell
CMD ["bash"]
